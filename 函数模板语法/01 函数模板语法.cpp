#include<iostream>
using namespace std;

// ����ģ��

//  �������ͽ�������

void swapInt(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;

}


// �������������ͺ���

void swapDouble(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

// ����ģ��
template<typename T> // ����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 20;

	//swapInt(a, b);
	// �Զ������Ƶ�
	//mySwap(a, b);
	// ��ʽָ������
	mySwap<int>(a, b);
	cout << "a = " << a << " b = " << b << endl;
}


void test02() {
	double a = 10.0;
	double b = 20.0;

	// swapDouble(a, b);
	// �Զ������Ƶ�
	//mySwap(a, b);
	// ��ʽָ������
	mySwap<double>(a, b);

	cout << "a = " << a << " b = " << b << endl;
}



int main() {

	test01();

	test02();

	system("pause");

	return 0;
}