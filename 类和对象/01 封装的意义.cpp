#include<iostream>
using namespace std;
#define PI 3.14

// 设计一个圆类，求圆的周长
// 圆的周长公式：2 * PI * r

// class 代表设计一个类，类后面紧跟着的，就是类名
class Circle {

	// 访问权限
	// 公共权限
	public:
		// 属性
		// 半径
		int m_r;
		// 行为
		// 获取圆的周长
		double calculateZC()
		{
			return 2 * PI * m_r;
		}
};


int main1() {

	// 通过圆类，创建一个具体的圆对象
	// 实例化
	Circle c1;
	// 给圆对象的属性赋值
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.calculateZC() << endl;

	system("pause");

	return 0;
}