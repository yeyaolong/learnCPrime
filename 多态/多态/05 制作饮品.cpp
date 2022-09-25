#include<iostream>
using namespace std;

/**
  * 制作饮品
  * 1、烧水
  * 2、冲泡
  * 3、倒入杯中
  * 4、加入辅料
  **/

class Drink {
public:
	Drink() {
		cout << "饮料构造函数调用" << endl;
	}
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void pour() = 0;
	virtual void addAccessories() = 0;
	void makeDrink() {
		boil();
		brew();
		pour();
		addAccessories();
	}

	~Drink() {
		cout << "饮料析构函数调用" << endl;
	}
};

class Coffee : public Drink {
public:
	Coffee() {
		cout << "咖啡构造函数" << endl;
	}
	~Coffee() {
		cout << "咖啡析构函数" << endl;
		delete this;
	}
protected:
	virtual void boil() {
		cout << "咖啡烧水" << endl;
	}
	virtual void brew() {
		cout << "咖啡冲泡" << endl;
	}
	virtual void pour() {
		cout << "咖啡倒入杯中" << endl;
	}
	virtual void addAccessories() {
		cout << "咖啡加入辅料" << endl;
	}
};

class Tea : public Drink {
public:
	Tea() {
		cout << "茶构造函数" << endl;
	}
	~Tea() {
		cout << "茶析构函数" << endl;
		delete this;
	}
protected:
	virtual void boil() {
		cout << "茶烧水" << endl;
	}
	virtual void brew() {
		cout << "茶冲泡" << endl;
	}
	virtual void pour() {
		cout << "茶倒入杯中" << endl;
	}
	virtual void addAccessories() {
		cout << "茶加入辅料" << endl;
	}
};

Drink* drinkFactory(Drink *abc) {
	abc->makeDrink();
	return abc;
}

void test07() {
	Drink* coffee = new Coffee;
	drinkFactory(coffee);
	// 父类的析构调用了，但是子类的析构没有调用(解决方案见下一节)
	delete coffee;

	Drink* tea = new Tea();
	drinkFactory(tea);
	// 父类的析构调用了，但是子类的析构没有调用(解决方案见下一节)
	delete tea;
}

int main5() {

	test07();

	system("pause");

	return 0;
}