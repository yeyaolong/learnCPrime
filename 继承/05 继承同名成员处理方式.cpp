#include<iostream>
using namespace std;

class Base5 {
public:
	Base5() {
		m_A = 100;
	}

	int m_A;

	void func() {
		cout << "Base5 �������е� func ����" << endl;
	}

	void func(int a) {
		cout << "Base5 �������� ����func ����" << endl;
	}
};



class Son5 :public Base5 {
public:
	Son5() {
		m_A = 200;
	}
	int m_A;

	void func() {
		cout << "Son5 �������е� func ����" << endl;
	}

	
};
// ͬ����Ա���Դ���
void test08() {
	Son5 s;
	cout << "s.m_A = " << s.m_A << endl;
	// ���ͨ��������� ���ʵ������е�ͬ����Ա����Ҫ��������
	cout << "Base5�е� m_A = " << s.Base5::m_A << endl;
}
// ͬ����Ա��������
void test09() {
	Son5 s;
	s.func();

	s.Base5::func();
	/*
		 ���� ����̳� �������Ѿ���ͬ�������ĸ�������غ���

		 ��Ϊ���������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
	*/
	// s.func(1);
	s.Base5::func(1);
}

int main() {

	test08();

	test09();

	system("pause");

	return 0;
}