#include<iostream>
#include<string>
using namespace std;
/*
结构体中的成员可以是另一个结构体
*/

// 定义一个学生结构体
// 要先定义一个学生结构体，因为下面老师结构体使用了学生
struct Student {
	string name; // 姓名
	int age; // 年龄
	int score; // 分数
};

// 定义一个老师结构体
struct Teacher {
	int id; // 教职工编号
	string name;
	int age;
	struct Student stu;
};


int main4() {

	Teacher t;
	t.id = 1000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 10;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << "\t老师编号：" << t.id << "\t老师年龄：" << t.age
		<< "\n老师辅导的学生姓名：" << t.stu.name << "\t学生年龄：" << t.stu.age 
		<< "\t学生分数：" << t.stu.score << endl;

	system("pause");

	return 0;
}