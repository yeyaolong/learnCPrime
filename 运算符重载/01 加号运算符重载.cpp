#include<iostream>
#include<string>
using namespace std;

// �Ӻ����������

class Person {
public:
	// 1����Ա��������+��
	Person operator+(Person& p) {
		cout << "������" + this->m_Name << "�ĳ�Ա����" << endl;
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;

		return temp;
	}
	int m_A;
	int m_B;
	string m_Name;
};

// 2��ͨ��ȫ�ֺ�������+��
/*
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;

	return temp;
}
*/
/*
// ����һ����������
Person operator+(Person& p1, int p2) {
	Person temp;
	temp.m_A = p1.m_A + p2;
	temp.m_B = p1.m_B + p2;

	return temp;
}
*/
void test01() {
	Person p1;
	p1.m_Name = "p1";
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_Name = "p2";
	p2.m_A = 10;
	p2.m_B = 10;

	
	// ��Ա�����ı��ʵ���
	// Person p3 = p1.operator+(p2);
	// ����������Ϊ
	//Person p3 = p1 + p2; // û������Щ������ƥ���"+"�����
	// ȫ�ֺ����ı��ʵ���
	//Person p3 = operator+(p1, p2);
	// ����������Ϊ
	Person p3 = p1 + p2; // ������p1�ĳ�Ա����
	p3 = p2 + p1; // ������p2�ĳ�Ա����
	
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;


	// ��������� Ҳ���Է�����������
	//Person p4 = p1 + 30;
	//cout << "p4.m_A = " << p4.m_A << endl;
	//cout << "p4.m_B = " << p4.m_B << endl;


}





int main1() {

	test01();

	system("pause");

	return 0;
}