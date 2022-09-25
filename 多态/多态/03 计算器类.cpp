#include<iostream>
#include<string>
using namespace std;


// 利用普通写法和多态写法实现计算器

// 普通实现
class Calculator {
public:
	Calculator(string opera, int a, int b) {
		cout << "计算器类构造函数" << endl;
		m_Opera = opera;
		m_Num1 = a;
		m_Num2 = b;
	}
	
	string m_Opera;
	int m_Num1;
	int m_Num2;
	int getResult() {
		if (m_Opera == "+") {
			return m_Num1 + m_Num2;
		}
		if (m_Opera == "-") {
			return m_Num1 - m_Num2;
		}
		if (m_Opera == "*") {
			return m_Num1 * m_Num2;
		}
		if (m_Opera == "/") {
			return m_Num1 / m_Num2;
		}
		// 普通写法，如果想扩展新功能，需要修改源码
		// 这不符合开闭原则，也即
		// 开闭原则：允许扩展源码，但不允许修改源码

		return m_Num1 + m_Num2;
		
	}

	~Calculator() {
		cout << "计算器类析构函数" << endl;
	}
};
// 多态实现
// 实现计算器的基类,
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	};

	int m_A;
	int m_B;
};

// 实现加法计算器
class AddCalculator:public AbstractCalculator {
public:
	int getResult() {
		return m_A + m_B;
	}
};
// 实现减法计算器
class SubstractCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_A - m_B;
	}
};
// 实现乘法计算器
class chengCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_A * m_B;
	}
};
// 实现除法计算器
class chuCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_A / m_B;
	}
};




void test04() {
	Calculator cal("-", 10, 20);

	cout << cal.getResult() << endl;
}

void test05() {
	// 多态使用条件
	// 父类指针或者引用指向子类对象
	AbstractCalculator* abc = new AddCalculator;

	abc->m_A = 10;
	abc->m_B = 10;

	cout << abc->getResult() << endl;

	delete abc; // 用new创建的对象在堆区，手动销毁


	AbstractCalculator* abc2 = new SubstractCalculator;

	abc2->m_A = 10;
	abc2->m_B = 10;

	cout << abc2->getResult() << endl;

	delete abc2;
}


int main3() {

	//test04();
	test05();

	system("pause");

	return 0;
}