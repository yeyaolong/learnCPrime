#include<iostream>
using namespace std;

// ����ģ��

//  �������ͽ�������

void swatInt(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;

}


// �������������ͺ���

void swatDouble(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

void test01() {
	int a = 10;
	int b = 20;

	swatInt(a, b);

	cout << "a = " << a << " b = " << b << endl;
}


void test02() {
	double a = 10.0;
	double b = 20.0;

	swatDouble(a, b);

	cout << "a = " << a << " b = " << b << endl;
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}