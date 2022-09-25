#include<iostream>
#include<string>
using namespace std;

class Animal5 {
public:
	Animal5() {
		cout << "Animal构造函数" << endl;
	}
	virtual void speak() = 0;
	// 虚析构
	/*virtual ~Animal5() {
		cout << "Animal析构函数" << endl;
	}*/

	// 纯虚析构(需要实现，否则报错)
	// 有了纯虚虚构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal5() = 0;
};
// 实现纯虚虚构
Animal5::~Animal5() {
	cout << "Animal析构函数" << endl;
}

class Cat5 : public Animal5 {
public:

	Cat5(string name) {
		cout << "Cat构造函数" << endl;
		m_Name = new string(name);
	}

	string *m_Name;

	virtual void speak() {
		cout << *m_Name << "猫在说话" << endl;
	}

	~Cat5() {
		if (m_Name != NULL) {
			cout << "Cat析构函数" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

};

void test08() {
	Animal5* cat = new Cat5("Tom");
	cat->speak();
	// 父类指针在析构的时候，不会调用子类中析构函数，导致子类中如果有堆区属性，会导致内存泄露
	delete cat;
}

int main() {

	test08();

	system("pause");

	return 0;
}