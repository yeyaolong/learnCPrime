#include<iostream>
using namespace std;



// 自定义整形变量
class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	
	// 前置递增运算符重载
	// 返回引用不要返回值，保证是对同一个数据执行递增操作
	// 如果返回值的话，就会有
	/*
		
		cout << ++myint << endl; // 1 这里实际打印的是新对象的值
		cout << myint << endl; // 0 这里打印旧对象的值

	*/
	//  
	MyInteger& operator++() {
		++m_Num;
		return *this;
	}

	// 后置递增运算符重载
	// 加一个占位参数，区分两种重载,可以不写参数名，因为我们并没有用到这个参数
	// 后置递增一定要返回值，不要返回引用
	// 因为temp是一个局部变量，函数完成后就会被释放掉
	/*
	
	*/
	MyInteger operator++(int) {
		// 先记录当时的结果
		MyInteger temp = *this;
		// 后递增
		m_Num++;
		// 最后将记录结果返回
		return temp;
	}
private:
	int m_Num;

};

// 重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num << endl;

	return cout;
}

void test03() {
	MyInteger myint;
	
	
	cout << ++myint << endl;
	cout << myint << endl;
	//++myint; // “MyInteger”不定义该运算符或到预定义运算符可接收的类型的转换
}

void test04() {
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl; // “MyInteger”不定义该运算符或到预定义运算符可接收的类型的转换
}


int main3() {

	//test03();

	system("pause");

	return 0;
}