#include<iostream>
using namespace std;

// ���캯�����ù���

// 1��ֻҪ����һ���࣬C++���ÿ���඼�������3������
// Ĭ�Ϲ��캯�� ��ʵ��
// �������� ֵ����
// �������� ��ʵ��

class Person6 {
public:
	int m_Age;

	Person6() {
		cout << "PersonĬ�Ϲ���" << endl;
	}

	Person6(int age) {
		cout << "Person�в�Ĭ�Ϲ���" << endl;
		m_Age = age;
	}

	Person6(const Person6& p) {
		cout << "Person����Ĭ�Ϲ���" << endl;
		m_Age = p.m_Age;
	}

	~Person6() {
		cout << "Person������������" << endl;
	}
};

//void test06() {
//	Person6 p;
//	p.m_Age = 18;
//
//	Person6 p2(p);	// ע�͵��������캯������Ȼ��ִ��,��ΪC++���ṩ
//	
//	cout << "p2������Ϊ" << p2.m_Age << endl;
//}

void test07() {
	//Person6 p;	// ����ṩ���вι��캯��������Ա��û���ṩ�޲ι��캯��������ᱨ��
	Person6 p(20);

	Person6 p2(p);

	cout << "p2������Ϊ��" << p2.m_Age << endl;


}

int main11() {

	//test06();
	test07();

	system("pause");

	return 0;
}