#include<iostream>
using namespace std;

int main2() {

	// ����sizeof �����������ռ���ڴ��С
	// �﷨ sizeof( ��������/���� )
	
	short num1 = 10;
	cout << "short����ռ���ڴ�ռ䣺" << sizeof(short) << "�ֽ�" << endl;
	cout << "short����ռ���ڴ�ռ䣺" << sizeof(num1) << "�ֽ�" << endl;

	int num2 = 10;
	cout << "int����ռ���ڴ�ռ䣺" << sizeof(int) << "�ֽ�" << endl;
	cout << "int����ռ���ڴ�ռ䣺" << sizeof(num2) << "�ֽ�" << endl;

	long num3 = 10;
	cout << "long����ռ���ڴ�ռ䣺" << sizeof(long) << "�ֽ�" << endl;	// windows��4�ֽڣ�linux 64bit ����8�ֽ�
	cout << "long����ռ���ڴ�ռ䣺" << sizeof(num3) << "�ֽ�" << endl;

	long long num4 = 10;
	cout << "long long ����ռ���ڴ�ռ䣺" << sizeof(long long) << "�ֽ�" << endl;
	cout << "long long ����ռ���ڴ�ռ䣺" << sizeof(num4) << "�ֽ�" << endl;

	system("pause");
	
	return 0;
}