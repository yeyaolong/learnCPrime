#include<iostream>
using namespace std;

int main1() {

	// ����
	/*
		1���������� ������[���鳤��]
		2���������� ������[���鳤��] = { ֵ1, ֵ2, ֵ3, ...}
		3���������� ������[���鳤��] = { ֵ1, ֵ2, ֵ3, ...}
	*/

	// ��ʽ1
	int arr1[4];
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	// ��ȡ���鳤��
	int sizeTotal = sizeof(arr1);
	int sizeOne = sizeof(arr1[0]);
	int len1 = sizeTotal / sizeOne;

	for (int i = 0; i < len1; i++) {
		cout << "arr1�±�" << i << ": " << arr1[i] << endl;
	}


	// ��ʽ2
	int arr2[4] = { 5, 6, 7, 8 };
	int sizeTotal2 = sizeof(arr2);
	int sizeOne2 = sizeof(arr2[0]);
	int len2 = sizeTotal2 / sizeOne2;

	for (int i = 0; i < len2; i++) {
		cout << "arr2�±�" << i << ": " << arr2[i] << endl;
	}
	// ��ʽ3
	int arr3[] = { 9, 10, 11, 12 };
	int sizeTotal3 = sizeof(arr3);
	int sizeOne3 = sizeof(arr3[0]);
	int len3 = sizeTotal3 / sizeOne3;


	for (int i = 0; i < len3; i++) {
		cout << "arr3�±�" << i << ": " << arr3[i] << endl;
	}
	// ѭ����ʵ�����鳤�ȳ�, 
	// �ڴ����������ڴ�û�б���ֵ��Ĭ�Ͼ���0xCC���������-858993460
	for (int i = 0; i < (len3 + 1); i++) {
		cout << "arr3�±�" << i << ": " << arr3[i] << endl;
	}
	
	// ��ȫ��ֵ
	// ��Ϊint����ֵʱ��Ĭ��ֵ��0������int�����У�û�и�ֵ���±�Ԫ��Ҳ����0
	int arr4[5] = { 1, 2 };
	int sizeTotal4 = sizeof(arr4);
	int sizeOne4 = sizeof(arr4[0]);
	int len4 = sizeTotal4 / sizeOne4;


	for (int i = 0; i < len4; i++) {
		cout << "arr4�±�" << i << ": " << arr4[i] << endl;
	}

	system("pause");

	return 0;
}