#include<iostream>
using namespace std;

// 多态
class Animal2 {
public:
	void speak() {
		cout << "动物在说话" << endl;
	}
};

class Cat2 : public Animal2 {
public:
	void speak() {
		cout << "喵" << endl;
	}
};

class Dog2 : public Animal2 {
public:
	void speak() {
		cout << "汪" << endl;
	}
};

// 地址在编译阶段就确定了函数地址，这里传入的对象是Animal
// 所以走的是animal.speak()
// 如果想执行cat.speak() 
// 这个函数的地址就不能提前确定，需要在运行阶段进行绑定
// 也就是给父类Animal的成员函数改为虚函数
void doSpeak2(Animal2& animal) {
	animal.speak();
}

// 动态多态满足条件
// 1、有继承关系
// 2、子类要重写（覆写）父类虚函数
// 重写 = 函数返回类型 函数名 参数列表 完全相同
// 注意，父类要写成虚函数。子类是否是虚函数无所谓

// 动态多态使用
// 父类的指针或者引用 指向子类对象
void test02() {
	Cat2 cat;

	doSpeak2(cat);

	Dog2 dog;
	doSpeak2(dog);

	Animal2 animal;
	doSpeak2(animal);
}

void test03() {
	cout << "sizeof animal = " << sizeof(Animal2) << endl; // x86下等于4， x64下等于8
	// Animal2 没有成员变量，并且不使用virtual时，因为没有成员变量，所以占用内存空间是 1
	// Animal2 虽然没有成员变量，但是用了virtual，变成多态的成员函数后，占用内存空间增大，变为4或者8字节.
	// 多出的字节，用来存储 "虚函数指针"
}

int main() {

	test02();

	system("pause");

	return 0;
}