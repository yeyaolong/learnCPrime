#include<iostream>
using namespace std;

// �����������ķ���ֵ
// 1����Ҫ���ؾֲ�����������

int& test01()
{
	int a = 10; // �ֲ����������������ջ��

	return a;
}

// 2�������ĵ��ÿ�����Ϊ��ֵ

int& test02()
{
	static int a = 10; // ��̬�����ᱻ�ŵ�ȫ�����С�ֱ��������������Ż��ͷ�

	return a;
}

int main4() {

	int& ref = test01();
	
	cout << "ref = " << ref << endl; // x64����ֱ�ӷ������룬��Ϊ�ֲ������ں���������ͣ��ڴ汻�ջ��ˣ�x64������Ұָ�롣 x86��һ�������10
	cout << "ref = " << ref << endl; // x86�ڶ������������

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;	// 10
	cout << "ref2 = " << ref2 << endl;	// 10
	
	test02() = 1000; // ����������Ϊ��ֵ������������ص������ã���ô�������������Ϊ��ֵ

	cout << "ref2 = " << ref2 << endl; // 1000

	system("pause");

	return 0;
}