#include<iostream>
using namespace std;

int main1() {

	// ���õĻ����﷨
	/*
		�������� &���� = ԭ��
	
	*/

	int a = 10;
	// ��������
	int& b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a�ĵ�ַ = " << &a << endl;
	cout << "b�ĵ�ַ = " << &b << endl; // ��ַ��ͬ
	b = 11;
	cout << "a = " << a << endl; // 11
	
	// ���Լ��о���ָ���÷����(��һ�ڽ��ľ������ú�ָ��Ĺ�ϵ)
	// �����൱��ָ�볣�� int* const p = 10;
	// ע��ָ�볣���ͳ���ָ�������
	// ָ�볣����int* const p = &a; // ��ʼ��ʱ���븳ֵ;ʼ��ָ��һ����ַ��ֵ���Ըı䣬����ַ����ı䣩
	// ����ָ�룺 int const * p = &a; // ʼ��ָ��һ������ֵ��ֵ�����Ըı䣬���ǵ�ַ���Ըı䣩

	int* c = &a;
	*c = 99;

	cout << "a = " << a << endl; // 99

	system("pause");

	return 0;
}