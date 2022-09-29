#include<iostream>
#include<fstream>
using namespace std;

class Person4 {
public:
	char m_Name[64];
	int m_Age;
};

void test04() {
	// 1、包含头文件

	// 2、创建流对象
	ifstream ifs;
	// 3、打开文件流 判断文件是否打开成功

	ifs.open("person.txt", ios::in | ios::binary);
	if (ifs.is_open()) {
		// 4、读文件
		Person4 p;
		ifs.read((char*)&p, sizeof(Person4));
		cout << "姓名:" << p.m_Name << endl;
		cout << "年龄:" << p.m_Age << endl;
		// 5、关闭文件流
		ifs.close();
	}
	else {
		cout << "文件打开失败";
		return;
	}
	
}

int main() {

	test04();

	system("pause");

	return 0;
}