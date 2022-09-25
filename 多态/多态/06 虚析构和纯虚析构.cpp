#include<iostream>
#include<string>
using namespace std;

class Animal5 {
public:
	Animal5() {
		cout << "Animal���캯��" << endl;
	}
	virtual void speak() = 0;
	// ������
	/*virtual ~Animal5() {
		cout << "Animal��������" << endl;
	}*/

	// ��������(��Ҫʵ�֣����򱨴�)
	// ���˴����鹹֮�������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal5() = 0;
};
// ʵ�ִ����鹹
Animal5::~Animal5() {
	cout << "Animal��������" << endl;
}

class Cat5 : public Animal5 {
public:

	Cat5(string name) {
		cout << "Cat���캯��" << endl;
		m_Name = new string(name);
	}

	string *m_Name;

	virtual void speak() {
		cout << *m_Name << "è��˵��" << endl;
	}

	~Cat5() {
		if (m_Name != NULL) {
			cout << "Cat��������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

};

void test08() {
	Animal5* cat = new Cat5("Tom");
	cat->speak();
	// ����ָ����������ʱ�򣬲������������������������������������ж������ԣ��ᵼ���ڴ�й¶
	delete cat;
}

int main() {

	test08();

	system("pause");

	return 0;
}