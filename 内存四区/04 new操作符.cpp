#include<iostream>
using namespace std;

// 1��new �Ļ����﷨

int* func4()
{
	// �ڶ���������������
	// new ���ظ����͵�ָ��
	int* p = new int(10);

	return p;
}

void test01() {
	int* p = func4();
	cout << *p << endl;
	cout << *p << endl; // ���������ݲ��������ͷ�
	cout << *p << endl;
	cout << *p << endl;
	// �ͷŶ�������
	// delete p;
	// cout << *p << endl; // ��������x86����x64����������գ�����������˳����벻��0����Ϊ�ڴ��ͷ��˾Ͳ����ٷ����ˣ�

}

// 2���ڶ�������new��������

void test02()
{
	int* arr = new int[10]; // ���������ţ���ʾ����10��Ԫ��

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100; // ��10��Ԫ�ظ�ֵ�� 100~109
	}

	for (int i = 0;i < 10; i++) {
		cout << arr[i] << endl;
	}
	// �ͷŶ�������
	// �ͷ������ʱ��, Ҫ��[]�ſ���
	delete[] arr;
	/*for (int i = 0;i < 10; i++) {
		cout << arr[i] << endl;
	}*/
}

int main() {
	test01();
	test02();


	system("pause");

	return 0;
}