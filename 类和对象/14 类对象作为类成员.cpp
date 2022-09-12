#include<iostream>
#include<string>
using namespace std;

// 类对象作为类成员

class Phone {
public:
	Phone(string pName) {
		cout << "Phone构造函数调用" << endl; // 先调用的Phone构造函数
		name = pName;
	}
	string name; // 手机品牌

	~Phone() {
		cout << "Phone析构函数调用" << endl; // 后调用Phone析构函数
	}

};

class Person10 {
public:
	// pName是string类型，但是m_Phone是 Phone类型。
	// 相当于调用以下方法
	// Phone m_Phone = pName;
	// 这里C++会自动做一次隐式转换，调用Phone类中对应的构造方法，比如，这里pName是string，所以会自动调用 Phone(string pName)
	// 
	Person10(string name, string pName):m_Name(name), m_Phone(pName) {
		cout << "Person构造函数调用" << endl; // 再调用的Person构造函数
	}

	//Person10(string name, string pName) {
	//	m_Name = name;
	//	m_Phone = pName; // 如果不用上面那种 初始化列表 的写法，直接这样写是不能赋值的
	//}
	// 姓名
	string m_Name;
	// 手机
	Phone m_Phone;

	~Person10() {	// 先调用Person析构函数
		cout << "Person析构函数调用" << endl;
	}
};

// 当其它类对象作为本类的成员，当构造时候，先构造类对象，再构造自身
// 析构的顺序是:先析构自身，再析构类对象

void test10() {
	Person10 p("张三", "iPhone 14 Pro");

	cout << p.m_Name << "拿着：" << p.m_Phone.name << endl;
}

int main14() {

	test10();

	system("pause");

	return 0;
}