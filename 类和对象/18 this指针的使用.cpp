#include<iostream>
using namespace std;

// thisָ���ʹ��

// 1��������Ƴ�ͻ

// 2�����ض�������*this


class Person18 {
public:

	Person18(int age) {
		// 1��������Ƴ�ͻ
		// age = age; // ��ֵʧ�ܣ����Ǳ��벻��������Ϊ ����Ⱥ����age����Person18::age
		this->age = age; // thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
	}

	int age;
	// �������� ������ʽ���� ����ԭֵ�ᱻ�ı�
	Person18& PersonAddAge(Person18& p) {
		this->age += p.age;
		return *this;
	}
	// ����ֵ ������ʽ���� ����ԭ����ֵ�����ټ����ı���
	Person18 PersonAddAge2(Person18& p) {
		this->age += p.age;
		return *this;
	}
};


void test18() {
	Person18 p1(10);

	cout << "p1������Ϊ" << p1.age << endl;
}

// 2�����ض�������*this
void test19() {
	Person18 p1(10);
	Person18 p2(10);
	//p2.PersonAddAge(p1);

	//cout << "p2������Ϊ��" << p2.age << endl; // 20

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ��" << p2.age << endl; // 40

	p2.PersonAddAge2(p1).PersonAddAge2(p1).PersonAddAge2(p1); // ��ʱp2�ĳ�ֵ�Ѿ�����40�ˣ���Ϊֻ��һ��+10��Ч����Ч����50
	cout << "p2������Ϊ��" << p2.age << endl; // 50 
}

int main18() {

	//test18();
	test19();

	system("pause");

	return 0;
}