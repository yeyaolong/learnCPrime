#include<iostream>
using namespace std;

int* func3() 
{
	// int a = new int(10);
	// return &a;

	// ����new�ؼ��ֿ��Խ����ݿ��ٵ�����
	// ָ�� ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10);// new ֱ�ӷ��ص���ָ�룬Ҫ��ָ�����
	return p;
}

int main() {
	// �ڶ�����������

	int* p = func3();
	// ����ڶ��������ݣ�����Աû�л��գ��ڳ������ǰ�Ͳ��ᱻ����
	// ���Բ�����x86,����x64��ϵͳ������ִ�м��Σ����Ƿ���10
	cout << *p << endl; // 10
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}