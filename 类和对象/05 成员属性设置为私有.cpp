#include<iostream>
#include<string>
using namespace std;

// 成员属性设置为私有
// 1、可以自己控制读写权限
// 2、对于写可以检测数据的有效性

class Person2
{
private:
	// 姓名 可读可写
	string m_Name;
	// 年龄 可读可写
	int m_Age;
	// 情人 只写
	string m_Lover;
public:
	string getName()
	{
		return m_Name;
	}
	void setName(string name)
	{
		m_Name = name;
	}
	int getAge()
	{
		return m_Age;
	}
	bool setAge(int age)
	{
		if (age >= 0 && age < 150) {
			m_Age = age;
			return true;
		}
		else {
			m_Age = 0;
			return false;
		}
		

	}
	void setLover(string lover)
	{
		m_Lover = lover;
	}
};

int main5() {

	Person2 p;
	p.setName("张三");
	p.getAge();
	p.setLover("李四");

	cout << "请输入年龄：" << endl;
	int age = 0;
	cin >> age;

	
	if (!p.setAge(age))
	{
		cout << "年龄异常" << endl;
	}
	
	cout << "姓名为：" << p.getName() << "\t年龄为：" << p.getAge() << endl;
	
	
	



	system("pause");

	return 0;
}