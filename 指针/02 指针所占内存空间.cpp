#include<iostream>
using namespace std;

int main2() {

	// ��32λ�Ĳ���ϵͳ�У�������ʲô���͵�ָ�룬��ռ��4���ֽڿռ�.
	// �ҵ�����x64�ģ�����ռ��8���ֽ�
	int a = 20;
	int* p_a = &a;
	cout << sizeof(p_a) << endl; // 8
	cout << sizeof(*p_a) << endl; // 4����ָ�����int�����Է���4
	double b = 2.0;
	double* p_b = &b;
	cout << sizeof(p_b) << endl; // 8
	cout << sizeof(*p_b) << endl; // 8, ��ָ�����double,���Է���8
	char c = 'c';
	char* p_c = &c;
	cout << sizeof(p_c) << endl; // 8
	cout << sizeof(*p_c) << endl; // 1, ��ָ�����char,���Է���1
	system("pause");

	return 0;
}