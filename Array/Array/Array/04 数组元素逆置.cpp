#include<iostream>
using namespace std;

int main4() {
	/*
		�����ҵĵ�һ�о���д���������½���һ�����飬ͨ��forѭ��������ֵ���ŷŽ���������
		���д������ʦ��д����������
		��ʱ�临�Ӷ�����˵��
		�ҵ�д����O(N)����ʦ��д����O(N/2)
		�ӿռ临�Ӷ�����˵
		���½���һ����ԭ���鳤����ȵ����飬�൱��Ҫ��Ҫ(2N�� * 4�ֽڵĿռ䡣������ʦ��(N + 1) * 4�������ʸ�
	*/
	/*
		int arr[5] = { 1, 3, 2, 5, 6 };
		int result[5];
		// ������鳤��
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

	
	// ��ʦ��д��
	/*
		���鵹�ã���������, 
		- ����ĵ�һ��ֵ����������һ��ֵ��λ��
		- ����ĵڶ���ֵ������ĵ����ڶ���ֵ��λ��
		- ����ĵ�N��ֵ������ĵ�length - Nֵ��λ��
	*/
	int arr[5] = { 1, 3, 2, 5, 6 };
	// ������鳤��
	int sizeTotal = sizeof(arr);
	int sizeOne = sizeof(arr[0]);
	int len = sizeTotal / sizeOne;
	int start = 0; // ����λ��1
	int end = len - 1; // ����λ��2
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