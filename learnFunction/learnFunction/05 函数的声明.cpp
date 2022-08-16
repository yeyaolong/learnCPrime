#include<iostream>
using namespace std;

// 函数声明，声明函数后，再在main里调用，再定义函数就不会报错了
int max(int a, int b);

// 声明可以写多此，但是**定义只能有一次**
int max(int a, int b);
int max(int a, int b);
/*
值得注意的是，在这个例子中，就算没写函数声明，它也可以运行，并不会报错。
可能是因为vs 2022 内置了max方法，所以即便max函数调用之后才定义，也没写函数声明，也能正常调用
但这样，实际调用的就是 vs 2022内置的max方法，而不是我们写的max方法

一个证明就是，把上面的int max函数声明注释掉，可以发现，命令窗口中并没有输出 "自定义的max函数" 字符串
因为实际调用是vs 2022内置的max函数
*/

int main() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

int max(int a, int b) {
	cout << "自定义的max函数" << endl;
	return a > b ? a : b;
}