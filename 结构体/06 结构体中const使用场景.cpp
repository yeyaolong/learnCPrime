#include<iostream>
#include<string>
using namespace std;

// const的使用场景

struct Student {
	string name; // 姓名
	const int age; // 年龄
	int score; // 分数
};

void printStudent(Student* s) {
	// s->age = 100; // const 不可修改
	cout << "姓名：" << s->name << "\t年龄：" << s->age << "\t分数：" << s->score << endl;
}


int main6() {

	struct Student s = { "张三", 20, 99 };

	// 通过函数打印结构体信息
	printStudent(&s);

	system("pause");

	return 0;
}