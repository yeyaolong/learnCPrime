#include<iostream>
using namespace std;

class Base4 {
public:
	Base4() {
		cout << "Base4�๹�캯��" << endl;
	}

	~Base4() {
		cout << "Base4��������" << endl;
	}
};

class Son4: public Base4 {
public:
	Son4() {
		cout << "Son4�๹�캯��" << endl;
	}

	~Son4() {
		cout << "Son4��������" << endl;
	}
};



void test06() {
	Base4 b;
}

void test07() {
	/*
		Base4�๹�캯��
		Son4�๹�캯��
		Son4��������
		Base4��������

		��Ϊ�ֲ������洢��ջ���ϣ�ջ�����ص��ǣ��Ƚ����
		����Base4�๹�캯�����ȵ��ã�Base4��������������
	*/
	Son4 s;
}

int main4() {

	//test06();

	test07();

	system("pause");

	return 0;
}