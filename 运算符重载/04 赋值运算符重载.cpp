#include<iostream>
using namespace std;

class Person4 {
public:
	Person4(int age) {
		m_Age = new int(age);
	}
	
	int* m_Age;

	// ���ظ�ֵ�����
	Person4& operator=(Person4& p) {
		// �������ṩ��ǳ������
		// m_Age = p.m_Age;
		// �����Լ����ظ�ֵ��������ĳ����
		/*
			���ж��Ƿ��������ڶ����������
			���ͷŸɾ�
			Ȼ�������
		*/
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);

		return *this;
	}

	~Person4() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
};

void test05() {
	Person4 p1(18);

	Person4 p2(20);


	// ���ظ�ֵ����ǰ���������ṩ����ǳ������ֵ
	// p2, p1ָ��ͬһ�������ڴ档����p2�ͷ�һ���ڴ��p1���ͷ�һ�Ρ���ͬһ���ڴ��ͷ����α���
	p2 = p1; // ��ֵ����.

	cout << "p1������Ϊ" << *p1.m_Age << endl;

	cout << "p2������Ϊ" << *p2.m_Age << endl;
}

void test06() {
	Person4 p1(18);

	Person4 p2(20);

	Person4 p3(40);

	p3 = p2 = p1; // ��ֵ����.

	cout << "p1������Ϊ" << *p1.m_Age << endl;

	cout << "p2������Ϊ" << *p2.m_Age << endl;

	cout << "p3������Ϊ" << *p3.m_Age << endl;
}

int main() {

	//test05();
	/*int a = 10;
	int b = 20;
	int c = 10;

	c = b = a;

	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;*/
	test06();
	system("pause");

	return 0;
}