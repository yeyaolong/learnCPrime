#include<iostream>
using namespace std;

int main1() {
	// ����
	// ������ -2^15 ~ 2^15-1
	// short num1 = 10;
	short num1 = 32768; //  -32768
	// ���� -2^31 ~ 2^31-1
	// int num2 = 10;
	// int num2 = 2^31; // 29 ֱ����2^31����29��������2147483648��ֵ���ص�ȴ��-2147483648
	// int num2 = 2147483648; // -2147483648
	int num2 = pow(2, 31); // ��ΪC���ԵĴη������� pow()��������^��
	// ^��ʾ ���ַ� https://blog.csdn.net/QiMingShiKe/article/details/102644317
	// ������ -2^31 ~ 2^31-1
	// long num3 = 10;
	// long num3 = 2^31; // 29
	long num3 = 2147483648; // -2147483648
	// �������� -2^63 ~ 2^63-1
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