#include<iostream>
using namespace std;

// ��������

// 1��ֵ����

void mySwap01(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// 2����ַ����
void mySwap02(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


// 3�����ô���

void mySwap03(int& a, int& b) {
	// �÷���ֵ������ȫ��ͬ
	int tmp = a;
	a = b;
	b = tmp;
}

int main3() {
	
	int a = 10;
	int b = 20;
	mySwap01(a, b); // ֵ���ݣ�ʵ�β��ᷢ���仯

	cout << "a = " << a << "\tb = " << b << endl;
	int c = 30;
	int d = 40;
	mySwap02(&c, &d); // ��ַ���ݣ�ʵ�λᷢ���仯

	cout << "c = " << c << "\tc = " << d << endl;

	int e = 50;
	int f = 60;
	mySwap03(e, f); // ���ô��ݣ�ʵ�λᷢ���仯

	cout << "e = " << e << "\tf = " << f << endl;

	system("pause");

	return 0;
}