#include<iostream>
using namespace std;

// ����������ʹ��֮ǰ���壬����main���涨��add���������ʧ��(�������ú�����������05 ��������)
int add(int a, int b) {
	return a + b;
}

int main1() {
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	cout << a << "+" << b << " = " << sum << endl;

	system("pause");

	return 0;
}


