#include<iostream>
using namespace std;
// ���õı����ǣ�ָ�볣��
// 
// ���������ã�ת��Ϊ int* const ref = &a;
void func(int& ref) {
	ref = 100;	// ����ref�����ã��Զ�������ת��Ϊ: *ref = 100;
}

int main5() {

	int a = 10;

	int& ref = a;

	ref = 20;  // �ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

	cout << "a = " << a << endl;

	cout << "ref = " << ref << endl; // �ڲ�����ref�����ã��Զ�ת���� *ref

	func(a);

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl; // �ڲ�����ref�����ã��Զ�ת���� *ref

	system("pause");

	return 0;
}