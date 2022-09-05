#include<iostream>
using namespace std;

class C1
{
	// 默认权限是 private
	int m_A;
public:
	// 获取指针
	int* getAPoint() {
		return &m_A;
	}
	int getA() {
		return m_A;
	}
};

struct C2
{
	int m_A; // 默认权限是public
};

int main4() {

	// struct与class的区别
	// struct 默认权限是public
	// class 默认权限是private

	C1 c1;
	// c1.m_A = 100; // private不可访问.但是还是可以用指针去修改的
	int* c1Point = c1.getAPoint();
	*c1Point = 10;
	cout << "c1.m_A = " << c1.getA() << endl;
	C2 c2;
	c2.m_A = 100; // public可以访问

	system("pause");

	return 0;
}