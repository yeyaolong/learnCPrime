#include<iostream>
using namespace std;

/*
����

const���εı���
const �������� ������ = ����ֵ

�곣����ͨ���������ļ��Ϸ�
#define ������ ����ֵ


*/


// �곣�� ����д��
/*
#define Day 7;

����� Day ��ֵΪ 7;
Ҳ���� Day��ֵΪ "7+�ֺ�"
*/

#define Day 7 // һ��7��

int main4() {
	// int Day // �곣���������¶���
	// Day = 8; // �곣�������޸�

	cout << "һ���ܹ���:" << Day << "��" << endl;

	// 2��const ���εı���
	const int Month = 12;
	// month = 13; // ���������޸�
	cout << "һ���ܹ���:" << Month << "��" << endl;
	system("pause");
	return 0;
}