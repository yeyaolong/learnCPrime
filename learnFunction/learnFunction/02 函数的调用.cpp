#include<iostream>
using namespace std;

// num1,num2被称为形参
int sum(int num1, int num2) {
	return num1 + num2;
}

int main2() {

	int num1 = 10;
	int num2 = 20;

	int result = sum(num1, num2);
	cout << result << endl;
	// num3, num4被称为实参
	int num3 = 30;
	int num4 = 50;

	cout << sum(num3, num4) << endl;

	system("pause");

	return 0;
}