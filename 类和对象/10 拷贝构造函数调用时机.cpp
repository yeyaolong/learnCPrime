#include<iostream>
using namespace std;

// �������캯���ĵ���ʱ��

// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

// 2��ֵ���ݵķ�ʽ������������ֵ

// 3��ֵ��ʽ���ؾֲ�����

class Person5
{
public:
	Person5() {
		cout << "Ĭ�Ϲ��캯��" << endl;
	}

	Person5(int age) {
		cout << "�вι��캯��" << endl;
		m_Age = age;
	}

	Person5(const Person5& p) {
		cout << "�������캯��" << endl;
		m_Age = p.m_Age;
	}

	~Person5() {
		cout << "Ĭ����������" << endl;
	}

	int m_Age;
};

// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test03() {
	Person5 p1(20);
	Person5 p2(p1);

	cout << "P2������Ϊ" << p2.m_Age << endl;
}

// 2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person5 p) { // ֵ���ݣ�����ÿ������캯��

}

void doWork2(Person5& p) { // ���ô��ݣ�������ÿ������캯��

}

void test04() {
	Person5 p;
	// doWork(p); // ����� ��������
	doWork2(p);
}


// 3.ֵ��ʽ���ؾֲ�����

Person5 doWork3() {
	Person5 p1;

	return p1;	// ����ֵ��ֵ���ݣ�������ÿ������캯��
}

Person5* doWork4() {
	Person5 p1;

	return &p1;	// �������ã����ô��ݣ���������ÿ������캯��
}

void test05() {
	//doWork3();
	doWork4();
}

int main10() {

	//test03();
	//test04();
	test05();

	system("pause");

	return 0;
}