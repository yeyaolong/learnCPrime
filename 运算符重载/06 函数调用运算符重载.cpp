#include<iostream>
#include<string>
using namespace std;

// �����������������


// ��ӡ�����

class MyPrint {
public:
	// ���غ������������
	void operator() (string test) {
		cout << test << endl;
	}
};

class MyAdd {
public:
	int operator() (int num1, int num2) {
		return num1 + num2;
	}
};

void myPrint02(string test) {
	cout << test << endl;
}

void test08() {
	MyPrint myprint;
	myprint("Hello World");

	myPrint02("Hello World");
}

void test09() {
	MyAdd myadd;

	int result = myadd(10, 20);

	cout << result << endl;

	// ������������
	// MyAdd() ����һ����������
	// MyAdd() (100, 100) ����һ����������󣬵������ص������() ����
	cout << MyAdd()(100, 100) << endl;
}

int main() {

	test08();

	test09();

	system("pause");

	return 0;
}