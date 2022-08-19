#include<iostream>
using namespace std;

int main3() {

	// 定义：指针变量指向内存中编号为0的空间
	// 用途：初始化指针变量
	// 注意：空指针指向的内存是不可以访问的（0~255的内存是系统占用的）

	// 初始化
	int* p = NULL;
	// 空指针是不可以进行访问的
	//*p = 100; // (进程 32552)已退出，代码为 -1073741819
	//cout << *p << endl; // 上面一部报错了，这一步不会执行

	system("pause");

	return 0;
}