#include<iostream>
using namespace std;


// ��ʼ���б�

class Person8 {
public:

	// ��ͳ��ʼ�����������ù��캯����
	/*Person8(int a, int b, int c) {
		m_A = a;
		m_B = b;
		m_C = c;

	}*/
	// ��ʼ���б��ʼ������
	Person8() :m_A(10), m_B(20), m_C(30)
	{
		// ���� m_A,m_B,m_C����û�����ݲ������ı���
	};
	Person8(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {

	};
	int m_A;
	int m_B;
	int m_C;
};

void test09() {
	//Person8 p(10, 20, 30);
	//Person8 p;
	Person8 p(30, 20, 10);
	cout << "m_A = " << p.m_A << "\tm_B = " << p.m_B << "\tm_C = " << p.m_C << endl;
}

int main13() {

	test09();

	system("pause");

	return 0;
}
