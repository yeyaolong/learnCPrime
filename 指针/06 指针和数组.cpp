#include<iostream>
using namespace std;

int main6() {

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// ��ͨ�ķ���
	cout << "�����е�һ��Ԫ�� = " << arr[0] << endl;

	
	// ʹ��ָ�����
	// arr����������׵�ַ,����arr������������ int *
	// &arr���������������ĵ�ַ������&arr������������ int*[10]
	// ���ܶ�������cout���ʱ��ַ����ȵģ�������cout����������ʲô����
	cout << "arr = " << arr << endl;
	cout << "&arr = " << &arr << endl;
	// cout << "arr == &arr" << (arr == &arr) << endl;

	int* p = arr; // arr����������׵�ַ &arr������������������ڵĵ�ַ
	// int* p2 = &arr; // �޷��ӡ�int (*)[10]��ת��Ϊ��int *��
	// int p2 = &arr; // �޷��ӡ�int (*)[10]��ת��Ϊ��int��
	cout << "����ָ����������е�һ��Ԫ�� = "  << *p << endl;

	for (int i = 0; i < 10; i++) {
		cout << "����ָ����������е�" << (i+1) << "��Ԫ�أ�\t" << *p << endl;
		p++; // ��Ϊp��������int�ģ�Ҳ������4�ֽڵģ����ԣ�����p++�ͻ����4���ֽ�
	}

	system("pause");

	return 0;
}