#include<iostream>
using namespace std;

// ���麯���ͳ�����

class Base4 {
public:
	// ���麯��
	// ֻҪ��һ�����麯�����������ǳ�����
	// �������ص㣺
	// �޷�ʵ��������
	// ����������࣬�������д�����еĴ��麯����Ҳ���ڳ�����,�޷�ʵ����
	virtual void func() = 0;
	// ��д = 0 �������ڴ��麯��
	//virtual void func2();
};

class Son4:public Base4 {
public:

};

class Son5 :public Base4 {
public:
	virtual void func() {
		cout << "func��������" << endl;
	}
	virtual void fun2() {}
};

void test06() {
	// �������޷�ʵ��������
	//Base4 b;
	//new Base4;
	// ���������ʵ�ָ���ĳ�������Ҳ���ɳ����࣬�޷�ʵ����
	//Son4 s;
	//new Son4;
	// ����ʵ�ָ���ĳ�����������ʵ������
	Son5 s;

	Base4* base = new Son5;
	base->func();
}


int main4() {

	test06();

	system("pause");

	return 0;
}