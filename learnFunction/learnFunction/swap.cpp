#include "swap.h" // ��˫���ţ���ʾ�����Զ����ͷ�ļ�


void swap2(int a, int b) {

	cout << "����ǰ��a = " << a << " b = " << b << endl;

	int tmp = a;
	a = b;
	b = tmp;

	cout << "������a = " << a << " b = " << b << endl;
}