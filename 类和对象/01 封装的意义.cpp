#include<iostream>
using namespace std;
#define PI 3.14

// ���һ��Բ�࣬��Բ���ܳ�
// Բ���ܳ���ʽ��2 * PI * r

// class �������һ���࣬���������ŵģ���������
class Circle {

	// ����Ȩ��
	// ����Ȩ��
	public:
		// ����
		// �뾶
		int m_r;
		// ��Ϊ
		// ��ȡԲ���ܳ�
		double calculateZC()
		{
			return 2 * PI * m_r;
		}
};


int main1() {

	// ͨ��Բ�࣬����һ�������Բ����
	// ʵ����
	Circle c1;
	// ��Բ��������Ը�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

	system("pause");

	return 0;
}