#include<iostream>
using namespace std;
// ��̬��Ա����
// ���ж�����ͬһ������
// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person12 {
public:
	// ��̬��Ա����
	static void func() {
		m_A = 100; // ��̬��Ա�����ܷ��ʾ�̬��Ա����
		//m_B = 9; // ��̬��Ա�������ܷ��ʷǾ�̬��Ա����
		cout << "static void func����" << endl;
	}

	static int m_A;
	int m_B;
private:
	// ��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2() {
		cout << "static void fun2����" << endl;
	}
};

int Person12::m_A = 0;

void test13() {
	// 1��ͨ���������
	Person12 p;
	p.func();
	// 2��ͨ����������
	Person12::func();
	//p.func2(); // private ����ֱ�ӵ���
}

int main16() {


	test13();

	system("pause");

	return 0;
}