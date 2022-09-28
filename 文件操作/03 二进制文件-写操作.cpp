#include<iostream>
#include<fstream>
using namespace std;

// 二进制文件 写文件
class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test03() {
	// 1、包含头文件

	// 2、创建流对象
	ofstream ofs;
	// 也可以直接在创建对象时直接指定文件路径和打开方式
	//ofstream ofs2("person.txt", ios::out | ios::binary);
	// 3、打开文件
	ofs.open("person.txt", ios::out | ios::binary);
	// 4、写文件
	Person p = { "张三", 18 };
	ofs.write((const char*)&p, sizeof(Person));
	// 5、关闭流
	ofs.close();
}

int main() {

	test03();

	system("pause");

	return 0;
}