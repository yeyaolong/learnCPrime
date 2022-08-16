#include<iostream>
using namespace std;

int main6() {

	// 1、 数据类型 数组名[行数][列数];
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
	// 2、 数据类型 数组名[行数][列数] = { {数据1, 数据2}, {数据3, 数据4} };
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
	// 3、 数据类型 数组名[行数][列数] = { 数据1, 数据2, 数据3, 数据4 };
	// 可读性差
	int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };

	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cout << arr3[row][col] << "\t";
		}
		cout << endl;
	};
	cout << endl;
	// 4、 数据类型 数组名[][列数] = { 数据1, 数据2, 数据3, 数据4 };
	// 可读性 差
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