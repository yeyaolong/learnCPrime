#include<iostream>
using namespace std;

// ȫ�ֱ���
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main1() {

	// ȫ����
	// ��ţ�ȫ�ֱ�������̬������ȫ�ֵĳ���
	
	// ����һ���ֲ�����
	int a = 10;
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַΪ��" << &a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << &b << endl;

	cout << "ȫ�ֱ���a�ĵ�ַΪ��" << &g_a << endl;
	cout << "ȫ�ֱ���b�ĵ�ַΪ��" << &g_b << endl;

	// ��̬���� ����ͨ����ǰ����� static �ؼ���
	static int s_a = 10;
	static int s_b = 10;

	cout << "��̬����a�ĵ�ַΪ��" << &s_a << endl;
	cout << "��̬����b�ĵ�ַΪ��" << &s_b << endl;

	// ���� �ַ������� �� const ���εı���
	cout << "�ַ��������ĵ�ַΪ��" << &"Hello World" << endl;
	// const ���ε�ȫ�ֱ���
	cout << "ȫ�ֳ���a�ĵ�ַΪ��" << &c_g_a << endl;
	cout << "ȫ�ֳ���b�ĵ�ַΪ��" << &c_g_b << endl;

	// const ���εľֲ�����
	
	const int c_a = 10; 
	const int c_b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ��" << &c_a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << &c_b << endl;

	// ���Է��֣�
	// �ֲ������;ֲ������ĵ�ַ�ǳ��ӽ���
	// ˵���ֲ������;ֲ���������ͬһ���ڴ�����
	// ȫ�ֳ�����ȫ�ֱ����뾲̬�����ĵ�ַ�ǳ��ӽ�
	// ˵���������������͵����ݷ���ͬһ���ڴ����У�ȫ������


	system("pause");

	return 0;
}