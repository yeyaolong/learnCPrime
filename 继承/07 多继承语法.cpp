#include<iostream>
using namespace std;

class Base7 {
public:
	Base7() {
		m_A = 100;
	}
	int m_A;
};

class Base8 {
public:
	Base8() {
		m_B = 200;
		m_A = 200;
	}
	int m_B;
	int m_A;
};
// �﷨ class����:�̳з�ʽ ����1,�̳з�ʽ ����2
class Son7 :public Base7, public Base8 {
public:
	Son7() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test12() {
	Son7 s;
	// ����ռ���ڴ�ռ����������� + ���౾�� ��ռ�ռ�
	cout << "sizeof Son7 = " << sizeof(s) << endl;

	// cout << "s.m_A = " << s.m_A << endl; // ����Son7::m_A����ȷ��
	// ��Ҫ����������
	cout << "s.Base7::m_A = " << s.Base7::m_A << endl;
	cout << "s.Base8::m_A = " << s.Base8::m_A << endl;
}

int main7() {

	test12();

	system("pause");

	return 0;
}