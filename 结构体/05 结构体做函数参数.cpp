#include<iostream>
#include<string>
using namespace std;

struct Student {
	string name; // 姓名
	int age; // 年龄
	int score; // 分数
};
// 值传递
// 值传递会copy一份数据放到内存中，会造成内存的浪费。
// 尤其是当一个结构体非常复杂，并且还是一个结构体数组时，拷贝一份完全相同的数据就显得非常浪费
void printStudent1(Student s) {
	s.name = "李四";
	cout << "printStudent1函数中打印的结果 姓名：" << s.name << "\t年龄：" << s.age << "\t分数：" << s.score << endl;
}

// 地址传递
// 将函数中的形参改为指针，可以减少内存空间
void printStudent2(Student* s) {
	(* s).name = "王五";
	s->age = 30;
	cout << "printStudent2函数中打印的结果 姓名：" << s->name << "\t年龄：" << s->age << "\t分数：" << s->score << endl;
}
int main5() {
	// 结构体做函数参数
	// 将学生传入到一个参数中，打印学生身上的所有信息

	// 创建结构体变量
	Student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	printStudent1(s); // 值传递 不会改变实参
	cout << "main函数中打印的结果 姓名：" << s.name << "\t年龄：" << s.age << "\t分数：" << s.score << endl;
	// 地址传递
	Student* stu_poinst = &s;
	printStudent2(stu_poinst); // 地址传递会改变实参
	cout << "main函数中打印的结果 姓名：" << s.name << "\t年龄：" << s.age << "\t分数：" << s.score << endl;

	system("pause");

	return 0;
}