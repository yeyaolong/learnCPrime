#include<iostream>
using namespace std;

// ����Ĭ�ϲ���

// ����������Լ������ݣ������Լ������ݣ����û�У�����Ĭ��ֵ
// �﷨������ֵ���� ������ (�β� = Ĭ��ֵ) {}

int add(int a,  int b = 0, int c = 0)
{
	return a + b + c;
}
// ע������
// 1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�Ӹ���λ�����󣬴����Ҷ�������Ĭ��ֵ
//int add2(int a, int b = 0, int c) { // �������:Ĭ��ʵ�β����βν�β
//
//	return a + b + c;
//}
// 2�����������������Ĭ�ϲ�����������ʵ�ֲ�����Ĭ�ϲ���
//int add3(int a, int b, int c = 0);
//
//int add3(int a, int b, int c = 0)	// error C2572: ��add3��: �ض���Ĭ�ϲ��� : ���� 1
//{
//	return a + b + c;
//}

int main1() {

	// int result = add(1, , 3); // û��Ĭ�ϲ���ʱ���ٴ��κ�һ�������������ᱨ��

	int result = add(1); // ����Ĭ�ϲ���

	cout << "result = " << result << endl;

	system("pause");

	return 0;
}