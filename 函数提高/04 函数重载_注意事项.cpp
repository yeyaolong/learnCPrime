#include<iostream>
using namespace std;

// ��������ע������
// 1��������Ϊ���ص�����

void func3(int& a)
{
	cout << "func3���� a = " << a << endl;
}
// �ж�Ϊ�������Ͳ�ͬ����������
void func3(const int& a)
{
	cout << "func3 const ���� a = " << a << endl;
}

// 2��������������Ĭ�ϲ���

void func4(int a, int b = 10)
{
	cout << "func4(int a = 10)����, a = " << a << "\tb = " << b << endl;
}

void func4(int a)
{
	cout << "func4(int a = 10)����, a = " << a << endl;
}


int main() {
	int a = 10;
	func3(a);
	const int b = 10;
	func3(b);
	func3(10); // ����Ҳ��func3(const int a).��Ϊ int &a = 10;���Ϸ�����const int& a = 10; �Ϸ�


	// func4(20); // ���ܺ������ص�д������ȷ�ģ���������ᱨ����Ϊ�޷�����func4(int a, int b = 10);��func4(int a);
	func4(10, 20); // ���ﲻ�ᱨ���������������ֵ����ĸ����غ���

	system("pause");

	return 0;
}