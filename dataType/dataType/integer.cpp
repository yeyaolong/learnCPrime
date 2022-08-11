#include<iostream>
using namespace std;

int main() {
	// 整型
	// 短整型 -2^15 ~ 2^15-1
	// short num1 = 10;
	short num1 = 32768; //  -32768
	// 整型 -2^31 ~ 2^31-1
	// int num2 = 10;
	int num2 = 2^31; // 29
	// 长整型 -2^31 ~ 2^31-1
	// long num3 = 10;
	long num3 = 2^31; // 29
	// 长长整型 -2^63 ~ 2^63-1
	// long long num4 = 10;
	long long num4 = 2^63; // 61


	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}