#include<iostream>
using namespace std;

int main2() {

	int num1 = 10;
	int num2 = 3;

	cout << num1 % num2 << endl; // 1

	int num3 = 10;
	int num4 = 20;

	cout << num3 % num4 << endl; // 10
	cout << num4 % num3 << endl; // 0

	// ����ȡģ

	int num6 = -10;
	int num7 = 3;

	cout << num6 % num7 << endl; // -1
	cout << num7 % num6 << endl; // 3

	// С����������ȡģ����
	float a1 = 5.5;
	float b1 = 1.1;

	// cout << a1 % b1 << endl; // error C2296: ��%��: ��Ч����Ϊ�������������Ϊ��float��

	system("pause");
	return 0;
}