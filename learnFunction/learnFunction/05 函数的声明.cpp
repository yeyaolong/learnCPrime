#include<iostream>
using namespace std;

// ������������������������main����ã��ٶ��庯���Ͳ��ᱨ����
int max(int a, int b);

// ��������д��ˣ�����**����ֻ����һ��**
int max(int a, int b);
int max(int a, int b);
/*
ֵ��ע����ǣ�����������У�����ûд������������Ҳ�������У������ᱨ��
��������Ϊvs 2022 ������max���������Լ���max��������֮��Ŷ��壬Ҳûд����������Ҳ����������
��������ʵ�ʵ��õľ��� vs 2022���õ�max����������������д��max����

һ��֤�����ǣ��������int max��������ע�͵������Է��֣�������в�û����� "�Զ����max����" �ַ���
��Ϊʵ�ʵ�����vs 2022���õ�max����
*/

int main() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

int max(int a, int b) {
	cout << "�Զ����max����" << endl;
	return a > b ? a : b;
}