#include<iostream>
using namespace std;

int main2() {
	int a = 10;
	

	// 1�����ñ����ʼ��
	int& b = a;
	//int& c; // ����������
	// 2�������ڳ�ʼ���󲻿��Է����ı�
	int c = 20;
	b = c; // ���Ǹ�ֵ�����Ǹı�����
	//&b = c; // ����������

	cout << "a = " << a << endl; // 20
	cout << "b = " << b << endl; // 20
	cout << "c = " << c << endl; // 20

	system("pause");

	return 0;
}