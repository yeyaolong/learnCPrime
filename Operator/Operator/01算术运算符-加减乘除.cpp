#include<iostream>
using namespace std;

int main1() {

	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl; // 13
	cout << a1 - b1 << endl; // 7
	cout << a1 * b1 << endl; // 30
	cout << a1 / b1 << endl; // 3 ������������������Ȼ������

	float b2 = 3.0f;

	cout << a1 / b2 << endl; // �����Ǹ����ͣ����Ҳ�Ǹ����ͣ� 3.333
	 
	float a2 = 10.0f;
	cout << a2 / b1 << endl; // �������Ǹ����ͣ����Ҳ�Ǹ����ͣ� 3.3333
	
	double a3 = 0.5;
	double b3 = 0.25;
	cout << a3 / b3 << endl; // 2

	system("pause");

	return 0;
}