#include<iostream>
using namespace std;

// ռλ����
// ����ֵ���� ������(��������) {}
// Ŀǰ�׶ε�ռλ���������ǻ��ò���������γ��л��õ�
// ռλ���� ��������Ĭ��ֵ
void func(int a, int = 10)
{
	cout << "this is function" << endl;
}

int main2() {

	func(10);

	system("pause");

	return 0;
}