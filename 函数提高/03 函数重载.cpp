#include<iostream>
using namespace std;

// ��������
// �����ú�������ͬ����߸�����
// 1��ͬһ����������
// 2����������ͬ
// 3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ

void func2() {
	cout << "func�ĵ���" << endl;
}

void func2(int a) {
	cout << "func(int a)�ĵ���!" << endl;
}

void func2(double a) {
	cout << "func(double a)" << endl;
}

void func2(int a, double b)
{
	cout << "func(int a, double b)" << endl;
}

void func2(double a, int b)
{
	cout << "func(double a, int b)" << endl;
}

// ע������
// �����ķ���ֵ��������Ϊ������������
//int func2(double a, int b)
//{
//	cout << "int func(double a, int b)" << endl;
//}
int main3() {

	func2();

	func2(10);

	func2(3.14);

	func2(10, 3.14);
	func2(3.14, 10);

	system("pause");

	return 0;
}