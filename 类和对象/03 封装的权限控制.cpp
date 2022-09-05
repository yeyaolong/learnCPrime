#include<iostream>
#include<string>
using namespace std;

// 访问权限
// 三种
// public 公共权限		成员在类内可以访问,类外也可以访问
// protected 保护权限	类内可以访问 类外不可以访问	子类可以访问父类中的protected的成员
// private 私有权限		类内可以访问，类外不可以访问 子类不可以访问父类中的private的成员

// protected 和 private 的区别在继承章节讲

class Person
{
	// 公共权限
public:
	string m_Name; // 姓名

protected:
	string m_Car; // 汽车

private:
	int m_Password; // 银行卡密码

private:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main3() {
	// 实例化一个 Person
	Person p1;

	p1.m_Name = "李四";
	// p1.m_Car = "拖拉机"; // protected 权限 在类外不可访问
	// p1.m_Password = 114514; // private 权限 在类外不可访问

	// p1.func();

	system("pause");

	return 0;
}