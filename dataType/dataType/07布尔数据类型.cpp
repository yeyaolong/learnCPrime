#include<iostream>
using namespace std;

int main() {

	// 创建bool数据类型
	bool flag = true;
	bool flag2 = false;

	cout << "flag = " << flag << endl; // 1,true的本质是非0数值
	cout << "flag2 = " << flag2 << endl; // 0, false的本质是0
	// 2、查看bool类型所占的内存空间
	cout << sizeof(bool) << endl; // 1个字节
	// 只要是非0的整数值都代表真	
	// 浮点型或者双精度数会被截断，但是只要不等于0，它就是真
	bool flag3 = 'a';
	bool flag4 = "abcdefg";
	bool flag5 = 0.0001f;
	bool flag6 = 0.0f;
	bool flag7 = 0;
	bool flag8 = 8;
	cout << "flag3 = " << flag3 << endl; // 1
	cout << "flag4 = " << flag4 << endl; // 1
	cout << "flag5 = " << flag5 << endl; // 1
	cout << "flag6 = " << flag6 << endl; // 0
	cout << "flag7 = " << flag7 << endl; // 0
	cout << "flag8 = " << flag8 << endl; // 1

	system("pause");
	return 0;
}