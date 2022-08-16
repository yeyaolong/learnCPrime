#include<iostream>
using namespace std;

/*
	做**值传递**时，形参的改变不会影响实参
*/
void swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

int main3() {
	int num1 = 100;
	int num2 = 200;
	
	cout << "调用swap前数据：" << endl;
	cout << "num1 = " << num1 << "\tnum2 = " << num2 << endl;
	swap(num1, num2);
	cout << "调用swap后数据：" << endl;
	cout << "num1 = " << num1 << "\tnum2 = " << num2 << endl;

	system("pause");

	return 0;
}