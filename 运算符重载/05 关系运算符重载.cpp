#include<iostream>
#include<string>
using namespace std;

// ���ع�ϵ�����

class Person5 {
public:
	Person5(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
	// ���ع�ϵ����� ==
	bool operator==(Person5& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator!=(Person5& p) {
		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test07() {
	Person5 p1("Tom", 18);

	Person5 p2("Tom", 18);

	if (p1 == p2) {
		cout << "p1��p2���" << endl;
	}
	else {
		cout << "p1��p2�����" << endl;
	}

	if (p1 != p2) {
		cout << "p1��p2�����" << endl;
	}
	else {
		cout << "p1��p2���" << endl;
	}

}

int main5() {

	test07();

	system("pause");

	return 0;
}