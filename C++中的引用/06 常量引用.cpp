#include<iostream>
using namespace std;

// �����βΣ�����ֹ��������޸���ʵ��
void showValue(const int &b)
{
	// b = 1000;
	cout << "b = " << b << endl;
}

int main() {

	// ��������
	// ʹ�ó��������������βΣ�����ֹ�����
	int a = 10;
	
	int& ref = a; // ��ȷ
	// int& ref2 = 10; // ����,���ñ�����һ��Ϸ����ڴ�ռ�
	/*
	 *  ��ȷ
	 * ����const�󣬱������������޸�Ϊ
	 * int a = 10;
	 * const int& ref = a;
	 * ֻ�������a��������Ҳ�ò����ˣ�ֻ����ref3���������
	 */
	const int& ref3 = 10;
	// ref3 = 20; // �����������ò����޸�


	int b = 100;
	showValue(b);
	cout << "����ִ�к�b = " << b << endl;
	system("pause");

	return 0;
}