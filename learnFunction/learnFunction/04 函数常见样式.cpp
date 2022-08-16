#include<iostream>
#include<string>
using namespace std;

// 1、无参数，无返回值
void fn1() {
	cout << "无参数，无返回值" << endl;
}
// 2、有参数，无返回值
void fn2(double d1, double d2) {
	cout << "有参数,无返回值, d1 = " << d1 << " d2 = " << d2 << endl;
}
// 3、有参数，有返回值
double fn3(double d1, double d2) {
	cout << "有参数,有返回值, d1 = " << d1 << " d2 = " << d2 << endl;
	return d1 + d2;
}
// 4、无参数，有返回值
string fn4() {
	return "Hello World";
}
int main4() {
	// 调用 无参数，无返回值 函数
	fn1();
	// 有参数，无返回值
	fn2(10, 20);
	// 有参数，有返回值
	cout << fn3(30, 40) << endl;
	// 无参数，有返回值
	cout << fn4() << endl;
	system("pause");

	return 0;
}