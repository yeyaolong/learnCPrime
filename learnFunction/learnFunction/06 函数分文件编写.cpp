#include<iostream>
#include "swap.h"
using namespace std;

// �������ļ���д
// ʵ���������ֽ��н����ĺ���
//void swap2(int a, int b) {
//
//	cout << "����ǰ��a = " << a << " b = " << b << endl;
//
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//	cout << "������a = " << a << " b = " << b << endl;
//}

// 1������.h��׺��ͷ�ļ�(swap.h) ---> ����д��������
// 2������.cpp��׺����Դ�ļ���swap.cpp�� --->  ����д��������
// 3����swap.hͷ�ļ���д��������
// 4����swap.cpp�ļ�������ͷ�ļ�#include "swap.h" // ������˫����
// 5����ʱswap.cpp�ļ��б���cout��endl�Ҳ���,
// ������Ҫ��swap.h��iostream, #include<iostream>
// ���ҽ�swap.h�ŵ������ռ���, using namespace std;
// 6����Ҫʹ��ͷ�ļ����ļ��У�
// ���� 06 �����ļ���д.cpp�м���ͷ�ļ� #include "swap.h" // ������˫���ţ���ʾ���Զ���ͷ�ļ�

int main() {

	swap2(10, 20);

	system("pause");

	return 0;
}