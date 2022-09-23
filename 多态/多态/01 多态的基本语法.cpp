#include<iostream>
using namespace std;

// 多态
class Animal {
public:
	void virtual speak() {
		cout << "动物在说话" << endl;
	}
};

class Cat: public Animal {
public:
	void speak() {
		cout << "喵" << endl;
	}
};

class Dog : public Animal {
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
void doSpeak(Animal &animal) {
	animal.speak();
}

// 动态多态满足条件
// 1、有继承关系
// 2、子类要重写（覆写）父类虚函数
// 重写 = 函数返回类型 函数名 参数列表 完全相同
// 注意，父类要写成虚函数。子类是否是虚函数无所谓

// 动态多态使用
// 父类的指针或者引用 指向子类对象
void test01() {
	Cat cat;

	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

	Animal animal;
	doSpeak(animal);
}

int main() {

	test01();

	system("pause");

	return 0;
}