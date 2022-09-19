#include<iostream>
using namespace std;

class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

// 利用开发人员命令提示工具查看对象模型
// 跳转盘符 F:
// 跳转文件路径 cd 具体路径下
// cl /d1 reportSingleClassLayout 类名 文件名
// 比如 cl /d1 reportSingleClassLayoutSon3 "03 继承中的对象模型.cpp"

class Son3 : public Base3 {
public:
	int m_D;
};

void test05()  {
	// private, protected, private都会被继承下来，所以这里sizeof返回16 = m_A + m_B + m_C + m_D;
	// 父类中所有非静态成员属性都会被继承下去
	// 父类中私有属性，被编译器隐藏了，因此访问不到，但是确实被继承下去了。
	cout << "Size of Son3 = " << sizeof(Son3) << endl;	// 16

}

int main() {

	test05();

	system("pause");

	return 0;
}