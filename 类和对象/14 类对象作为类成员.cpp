#include<iostream>
#include<string>
using namespace std;

// �������Ϊ���Ա

class Phone {
public:
	Phone(string pName) {
		cout << "Phone���캯������" << endl; // �ȵ��õ�Phone���캯��
		name = pName;
	}
	string name; // �ֻ�Ʒ��

	~Phone() {
		cout << "Phone������������" << endl; // �����Phone��������
	}

};

class Person10 {
public:
	// pName��string���ͣ�����m_Phone�� Phone���͡�
	// �൱�ڵ������·���
	// Phone m_Phone = pName;
	// ����C++���Զ���һ����ʽת��������Phone���ж�Ӧ�Ĺ��췽�������磬����pName��string�����Ի��Զ����� Phone(string pName)
	// 
	Person10(string name, string pName):m_Name(name), m_Phone(pName) {
		cout << "Person���캯������" << endl; // �ٵ��õ�Person���캯��
	}

	//Person10(string name, string pName) {
	//	m_Name = name;
	//	m_Phone = pName; // ��������������� ��ʼ���б� ��д����ֱ������д�ǲ��ܸ�ֵ��
	//}
	// ����
	string m_Name;
	// �ֻ�
	Phone m_Phone;

	~Person10() {	// �ȵ���Person��������
		cout << "Person������������" << endl;
	}
};

// �������������Ϊ����ĳ�Ա��������ʱ���ȹ���������ٹ�������
// ������˳����:���������������������

void test10() {
	Person10 p("����", "iPhone 14 Pro");

	cout << p.m_Name << "���ţ�" << p.m_Phone.name << endl;
}

int main14() {

	test10();

	system("pause");

	return 0;
}