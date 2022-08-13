#include<iostream>
using namespace std;

int main1() {
	// 整型
	// 短整型 -2^15 ~ 2^15-1
	// short num1 = 10;
	short num1 = 32768; //  -32768
	// 整型 -2^31 ~ 2^31-1
	// int num2 = 10;
	// int num2 = 2^31; // 29 直接用2^31返回29，但是用2147483648赋值返回的却是-2147483648
	// int num2 = 2147483648; // -2147483648
	int num2 = pow(2, 31); // 因为C语言的次方函数是 pow()，并不是^。
	// ^表示 脱字符 https://blog.csdn.net/QiMingShiKe/article/details/102644317
	// 长整型 -2^31 ~ 2^31-1
	// long num3 = 10;
	// long num3 = 2^31; // 29
	long num3 = 2147483648; // -2147483648
	// 长长整型 -2^63 ~ 2^63-1
	// long long num4 = 10;
	// long long num4 = 2^63-1; // 61
	long long num4 = 9223372036854775808; // -9223372036854775808


	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}