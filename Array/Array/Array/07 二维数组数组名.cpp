#include<iostream>
using namespace std;

int main7() {

	// ��ά������;
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	// 1���鿴ռ���ڴ�ռ��С
	cout << "ռ���ڴ�ռ��СΪ��" << sizeof(arr) << endl;
	cout << "�����һ��ռ���ڴ�ռ��СΪ��" << sizeof(arr[0]) << endl;
	cout << "����Ԫ�ص�һ��ռ���ڴ�ռ��СΪ" << sizeof(arr[0][0]) << endl;
	// ������
	cout << "�������� = " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "�������� = " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	// 2���鿴�׵�ַ
	cout << "��ά���������ڴ��׵�ַ:" << arr << endl;
	cout << "��ά�����һ���ڴ��׵�ַ:" << arr[0] << endl;
	cout << "��ά����ڶ����ڴ��׵�ַ:" << arr[1] << endl;
	cout << "��ά�����һ��Ԫ�ص�ַ:" << &arr[0][0] << endl;
	cout << "��ά����ڶ��е�һ��Ԫ�ص�ַ:" << &arr[1][0] << endl;
	system("pause");

	return 0;
}