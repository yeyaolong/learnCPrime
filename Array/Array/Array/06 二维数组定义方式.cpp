#include<iostream>
using namespace std;

int main6() {

	// 1�� �������� ������[����][����];
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;

	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cout << arr[row][col] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	// 2�� �������� ������[����][����] = { {����1, ����2}, {����3, ����4} };
	int arr2[2][3] = { 
		{1, 2, 3},
		{4, 5, 6}
	};
	
	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cout << arr2[row][col] << "\t";
		}
		cout << endl;
	};
	cout << endl;
	// 3�� �������� ������[����][����] = { ����1, ����2, ����3, ����4 };
	// �ɶ��Բ�
	int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };

	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cout << arr3[row][col] << "\t";
		}
		cout << endl;
	};
	cout << endl;
	// 4�� �������� ������[][����] = { ����1, ����2, ����3, ����4 };
	// �ɶ��� ��
	int arr4[][3] = { 1, 2, 3, 4, 5, 6 };

	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cout << arr4[row][col] << "\t";
		}
		cout << endl;
	};

	

	system("pause");

	return 0;
}