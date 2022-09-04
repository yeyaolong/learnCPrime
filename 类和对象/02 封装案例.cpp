#include<iostream>
#include<string>
using namespace std;

// 设计一个学生类，属性有姓名和学号
// 可以给姓名和学号赋值，可以显示学生的姓名和学号


class Student {
private:
	// 类中的属性和行为 我们统一称为 成员
	// 属性 成员属性 成员变量
	// 行为 成员函数 成员方法
	string stuName;
	int stuNo;
public:	// 公共权限

	string getStuName() {
		return stuName;
	}
	void setStuName(string name) {
		stuName = name;
	}

	int getStuNo() {
		return stuNo;
	}
	void setStuNo(int number) {
		stuNo = number;
	}


};

int main() {
	// 实例化
	Student stu;

	stu.setStuName("张三");
	stu.setStuNo(1);


	//cout << "stuName = " << stu.stuName << "\tstuNo = " << stu.stuNo << endl; // private属性不能直接获得

	cout << "stuName = " << stu.getStuName() << "\tstuNo = " << stu.getStuNo() << endl;

	Student stu2;
	stu2.setStuName("李四");
	stu2.setStuNo(2);
	cout << "stuName = " << stu2.getStuName() << "\tstuNo = " << stu2.getStuNo() << endl;
	system("pause");

	return 0;
}