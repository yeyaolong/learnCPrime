#include<iostream>
using namespace std;

class Base6 {
public:
	static void func() {
		cout << "Base6 static void func()" << endl;
	}

	static void func(int a) {
		cout << "Base6 static void func(int a)" << endl;
	}

	static int m_A;
};

int Base6::m_A = 100;

class Son6: public Base6 {
public:
	// ��һ�ڽ�����������ֻ����һ��ͬ���ĳ�Ա�ĺ���������Ḳ�ǵ�����������ͬ����Ա����
	// �������ʸ����б����ص�ͬ������������Ҫ��������
	/*static void func() {
		cout << "Son6 static void func()" << endl;
	}*/
};

// ͬ����̬��Ա
void test10() {
	Son6 s;
	cout << "ͨ���������Son �µ� m_A = " << s.m_A << endl; // ͨ���������
	cout << "ֱ��ͨ����������Son �µ� m_A = " << Son6::m_A << endl; // ֱ��ͨ����������
	cout << "ͨ��������� Base6 �µ� m_A = " << s.Base6::m_A << endl;
	cout << "ֱ��ͨ���������� Base6 �µ� m_A = " << Base6::m_A << endl;
	cout << "ͨ��������������� ���� �µ� m_A = " << Son6::Base6::m_A << endl;
}
void test11() {
	Son6 s;
	// ͨ���������
	s.func();
	s.func(10);
	s.Base6::func();
	s.Base6::func(10);
	// ֱ��ͨ�������
	Son6::func();
	Son6::func(10);

	Son6::Base6::func();
	Son6::Base6::func(10);
}

int main6() {

	// test10();
	test11();

	system("pause");

	return 0;
}