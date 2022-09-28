#include<iostream>
#include<fstream>
using namespace std;

// 文本文件 写文件

void test01() {
	cout << "写文件开始" << endl;
	// 1、包含头文件 #include<fstream>
	// 
	// 2、创建流对象
	ofstream ofs;
	// 3、制定打开方式
	// ofs.open("test01.txt", ios::out); // 不指定路径，默认情况和 .cpp文件路径同目录
	ofs.open("test01.txt", ios::trunc); // 不指定路径，默认情况和 .cpp文件路径同目录
	// 4、写内容
	ofs << "Hello World \t你好世界" << endl;
	ofs << "芜湖起飞" << endl;
	// 5、关闭流
	ofs.close();
	cout << "写文件结束" << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}