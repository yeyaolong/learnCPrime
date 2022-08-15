#include<iostream>
using namespace std;

int main4() {
	/*
		这是我的第一感觉的写法，就是新建立一个数组，通过for循环，把数值倒着放进新数组里
		这个写法和老师的写法比起来，
		从时间复杂度上来说，
		我的写法是O(N)，老师的写法是O(N/2)
		从空间复杂度上来说
		我新建了一个与原数组长度相等的数组，相当于要需要(2N） * 4字节的空间。不如老师的(N + 1) * 4的利用率高
	*/
	/*
		int arr[5] = { 1, 3, 2, 5, 6 };
		int result[5];
		// 获得数组长度
		int sizeTotal = sizeof(arr);
		int sizeOne = sizeof(arr[0]);
		int len = sizeTotal / sizeOne;


		for (int i = len; i > 0; i--) {
			int index = len - i;
			result[index] = arr[i - 1];
		}
		for (int i = 0; i < len; i++) {
			cout << result[i] << endl;
		}
	*/

	
	// 老师的写法
	/*
		数组倒置，可以理解成, 
		- 数组的第一个值与数组的最后一个值换位置
		- 数组的第二个值与数组的倒数第二个值换位置
		- 数组的第N个值与数组的第length - N值换位置
	*/
	int arr[5] = { 1, 3, 2, 5, 6 };
	// 获得数组长度
	int sizeTotal = sizeof(arr);
	int sizeOne = sizeof(arr[0]);
	int len = sizeTotal / sizeOne;
	int start = 0; // 交换位置1
	int end = len - 1; // 交换位置2
	int tmp;

	for (int i = 0; i < (len + 1) / 2; i++) {
		tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
		if (start >= end) {
			break;
		}
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}



	
	
	


	system("pause");

	return 0;
}