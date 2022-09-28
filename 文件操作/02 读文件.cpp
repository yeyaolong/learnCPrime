#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test02() {
	// 1、包含头文件

	// 2、创建流对象
	ifstream ifs;
	// 3、打开文件 并且判断是否成功
	ifs.open("test01.txt", ios::in);
	if (ifs.is_open()) {
		// 4、读数据
		// 这里读的内容不完整，读到\t就停止了
		/*string str;
		ifs >> str;
		cout << str << endl;*/

		// 读取方式1 这种写法无法识别 \t
		/*char buf[1024] = { 0 };
		while (ifs >> buf) {
			cout << buf << endl;
		}*/
		// 读取方式2
		char buf2[1024] = { 0 };
		while (ifs.getline(buf2, sizeof(buf2))) {
			cout << buf2 << endl;
		}
		// 读取方式3
		/*string buf3;

		while (getline(ifs, buf3)) {
			cout << buf3 << endl;
		}*/
		// 读取方式4 不推荐
		// 一次读一个字符，直到文件尾
		/*char c;
		while ((c = ifs.get()) != EOF) {
			cout << c;
		}*/

		// 5、关闭流
		ifs.close();
	}
	else {
		cout << "文件打开失败" << endl;
	}
	
	
}

int main2() {

	test02();

	system("pause");

	return 0;
}