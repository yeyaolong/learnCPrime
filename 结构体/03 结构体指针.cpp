#include<iostream>
#include<string>
using namespace std;

// 结构体定义
struct Student {
	string name; // 姓名
	int age; // 年龄
	int score; // 分数
};

int main3() {

	// 创建学生结构体变量
	struct Student s1 = { "张三", 18, 100 };
	// 通过指针指向结构体变量
	// int* p = &s1; // 指针类型不兼容 //“初始化”: 无法从“Student *”转换为“int *”
	Student* p = &s1;
	cout << sizeof(p) << endl; // 不论结构体多么的大，指针在x86 4字节， x64 8字节
	// 通过指针访问结构体变量中的数据
	// 通过箭头 -> 获得数据
	cout << "姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score << endl;
	// 这里必须加括号
	cout << "姓名：" << ( * p).name << "\t年龄：" << ( * p ).age << "\t分数：" << ( * p ).score << endl;
	system("pause");

	return 0;
}