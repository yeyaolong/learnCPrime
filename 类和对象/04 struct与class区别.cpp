#include<iostream>
using namespace std;

class C1
{
	// Ĭ��Ȩ���� private
	int m_A;
public:
	// ��ȡָ��
	int* getAPoint() {
		return &m_A;
	}
	int getA() {
		return m_A;
	}
};

struct C2
{
	int m_A; // Ĭ��Ȩ����public
};

int main4() {

	// struct��class������
	// struct Ĭ��Ȩ����public
	// class Ĭ��Ȩ����private

	C1 c1;
	// c1.m_A = 100; // private���ɷ���.���ǻ��ǿ�����ָ��ȥ�޸ĵ�
	int* c1Point = c1.getAPoint();
	*c1Point = 10;
	cout << "c1.m_A = " << c1.getA() << endl;
	C2 c2;
	c2.m_A = 100; // public���Է���

	system("pause");

	return 0;
}