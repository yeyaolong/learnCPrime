#include<iostream>
#include<string>
using namespace std;

/*
结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
通过结构体创建变量的方式有三种
- struct 结构体名 变量名
- struct 结构体名 变量名 = { 成员1值, 成员2值, ... }
- 定义结构体时顺便创建变量
*/

// 结构体定义
struct Student {
	string name; // 姓名
	int age; // 年龄
	int score; // 分数
}s3; // 定义结构体时顺便创建一个结构体变量

int main1() {
	
	// 通过结构体创建具体学生
	// struct Student s1; // struct 关键字可以省略
	Student s1;
	s1.name = "张三";
	s1.age = 28;
	s1.score = 59;

	cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t分数：" << s1.score << endl;

	struct Student s2 = {"李四", 28, 58 }; // 按顺序填充参数
	
	cout << "姓名：" << s2.name << "\t年龄：" << s2.age << "\t分数：" << s2.score << endl;

	s3.name = "王五";
	s3.age = 20;
	s3.score = 57;

	cout << "姓名：" << s3.name << "\t年龄：" << s3.age << "\t分数：" << s3.score << endl;

	system("pause");

	return 0;
}