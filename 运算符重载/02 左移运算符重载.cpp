#include<iostream>
using namespace std;

// �������������
class Person2 {
	friend ostream& operator<<(ostream& cout, Person2& p);
public:
	Person2(int a, int b) {
		m_A = a;
		m_B = b;
	}
private:
	// ���ó�Ա�������� ���������
	// p.operator<<(cout) �򻯰汾 p << cout
	// �������ó�Ա��������<<���������Ϊ����cout ��һֱ�����Ҳ���
	/*void operator<<( cout ) {

	}*/

	int m_A;
	int m_B;
};

// ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream &cout, Person2 &p) { // ���� operator<<(cout, p) ����ʽ cout << p
	cout << "m_A = " << p.m_A << "\tm_B = " << p.m_B;

	return cout;
}

void test02() {
	Person2 p(10, 10);
	//p.m_A = 10;
	//p.m_B = 10;

	//cout << p.m_A << endl;

	cout << p << "hello World" << endl; // û���ҵ����ܡ�Person�����͵��Ҳ������������(��û�пɽ��ܵ�ת��)
}

int main() {

	test02();

	system("pause");

	return 0;
}