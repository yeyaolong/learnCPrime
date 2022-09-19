#include<iostream>
using namespace std;

// 继承方式

// 公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1 {
public:
	void func() {
		m_A = 10; // 能访问父类public成员
		m_B = 10; // 能访问父类protected成员，到了子类中依然是protected成员
		// m_C = 10; // 不能访问父类private成员

	}
};



void test02() {  
	Son1 s1;

	s1.m_A = 100;
	//s1.m_B = 100; // 类外不能访问，子类中依然是protected成员
	// s1.m_C = 100; // 类外不能访问

}
// 保护继承
class Son2 : protected Base1 {
public:
	void func() {
		m_A = 10; // 能访问父类public成员，到了子类中是protected成员
		m_B = 10; // 能访问父类protected成员，到了子类中依然是protected成员
		// m_C = 10; // 不能访问父类private成员
	}
};

class GrandSon2 : public Son2 {
public:
	void func() {
		m_A = 10;
		m_B = 10; // 子类的子类可以访问protected成员
		//m_C = 10;

	}
};

void test03() {
	Son2 s2;

	// s2.m_A = 100; // 类外不能访问，子类中是protected成员
	// s1.m_B = 100; // 类外不能访问，子类中依然是protected成员
	// s1.m_C = 100; // 类外不能访问

}

// 私有继承
class Son3 : private Base1 {
public:
	void func() {
		m_A = 10; // 能访问父类public成员，到了子类中是private成员
		m_B = 10; // 能访问父类protected成员，到了子类中依然是private成员
		// m_C = 10; // 不能访问父类private成员
	}
};

void test04() {
	Son3 s3;
	//s3.m_A = 100;  // 类外不能访问，子类中是private成员
	//s3.m_B = 100;  // 类外不能访问，子类中是private成员
	//s3.m_C = 100;  // 类外不能访问
}

class GrandSon3 : public Son3 {
public:
	void func() {
		//m_A = 100; // m_A在son3中是private权限,无法访问了
	}
};

int main2() {

	system("pause");

	return 0;
}