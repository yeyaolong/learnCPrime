#include<iostream>
using namespace std;

/*
	��**ֵ����**ʱ���βεĸı䲻��Ӱ��ʵ��
*/
void swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

int main3() {
	int num1 = 100;
	int num2 = 200;
	
	cout << "����swapǰ���ݣ�" << endl;
	cout << "num1 = " << num1 << "\tnum2 = " << num2 << endl;
	swap(num1, num2);
	cout << "����swap�����ݣ�" << endl;
	cout << "num1 = " << num1 << "\tnum2 = " << num2 << endl;

	system("pause");

	return 0;
}