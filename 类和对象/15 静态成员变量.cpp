#include<iostream>
using namespace std;

// ��̬��Ա ����
class Person11 {
public:
	// 1����̬�������ж�����ͬһ������
	// 2������׶ξͷ����ڴ�
	// 3�����������������ʼ������
	static int m_A;
// ��̬��Ա��������Ȩ��
private:
	static int m_B;
};

int Person11::m_A = 100; // �����ʼ��
int Person11::m_B = 200;
void test11() {
	Person11 p;
	cout << p.m_A << endl; 	// û���������ʼ���������޷��������ⲿ���� "public: static int Person11::m_A" (?m_A@Person11@@2HA)

	Person11 p2;
	p2.m_A = 200;

	cout << p.m_A << endl; 	// ��̬�������ж�����ͬһ������
}

void test12() {
	// ��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	// ��˾�̬��Ա���������ַ��ʷ�ʽ

	// 1��ͨ��������з���
	Person11 p;
	cout << p.m_A << endl;

	// 2��ͨ���������з���
	cout << Person11::m_A << endl;


	//cout << Person11::m_B << endl; // private ����������ֱ�ӷ���
	//cout << p.m_B << endl; // private ����������ֱ�ӷ���
}

int main15() {

	// test11();
	test12();

	system("pause");

	return 0;
}