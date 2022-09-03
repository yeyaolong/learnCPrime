#include<iostream>
using namespace std;

// 1、new 的基本语法

int* func4()
{
	// 在堆区创建整型数据
	// new 返回该类型的指针
	int* p = new int(10);

	return p;
}

void test01() {
	int* p = func4();
	cout << *p << endl;
	cout << *p << endl; // 堆区的数据不会主动释放
	cout << *p << endl;
	cout << *p << endl;
	// 释放堆区数据
	// delete p;
	// cout << *p << endl; // 无论是在x86还是x64，都是输出空，并报错，最后退出代码不是0（因为内存释放了就不能再访问了）

}

// 2、在堆区利用new开辟数组

void test02()
{
	int* arr = new int[10]; // 用了中括号，表示数组10个元素

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100; // 给10个元素赋值， 100~109
	}

	for (int i = 0;i < 10; i++) {
		cout << arr[i] << endl;
	}
	// 释放堆区数组
	// 释放数组的时候, 要加[]才可以
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