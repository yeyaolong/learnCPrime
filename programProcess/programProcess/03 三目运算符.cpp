#include<iostream>
using namespace std;

int main3() {

	int a = 0;
	int b = 0;

	cout << "������A:" << endl;
	cin >> a;

	cout << "������B: " << endl;
	cin >> b;

	int max = a;
	a > b ? max = a : max = b;

	cout << "���ֵΪ��" << max << endl;
	// ��Ŀ���� ���ص���һ��������������һ��ֵ
	int c = 10;
	int d = 20;
	
	(c > d ? c : d) = 100; // ��� c > d ����ô��C��ֵΪ100������d��ֵΪ100

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	system("pause");

	return 0;
}