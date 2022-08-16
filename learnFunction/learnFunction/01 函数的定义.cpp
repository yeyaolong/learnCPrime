#include<iostream>
using namespace std;

// 函数必须在使用之前定义，所以main下面定义add函数编译会失败(可以利用函数声明，见05 函数声明)
int add(int a, int b) {
	return a + b;
}

int main1() {
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	cout << a << "+" << b << " = " << sum << endl;

	system("pause");

	return 0;
}


