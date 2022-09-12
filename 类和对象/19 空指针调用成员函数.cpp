#include<iostream>
using namespace std;

// 空指针调用成员函数
class Person19 {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}

	void showPersonAge() {
		//cout << "m_Age = " << m_Age << endl;
		
		
		if (this == NULL) {
			// 空检查，增加健壮性
			return;
		}
		// 这个写法与上面写法效果完全一样
		// 因为this是NULL，所以这里执行会报错
		cout << "m_Age = " << this->m_Age << endl; 
	}

	int m_Age;
};

void test20() {
	Person19* p = NULL;
	p->showClassName();	// 一切正常
	p->showPersonAge(); // 能执行，但是最后会报错
}

int main19() {

	test20();

	system("pause");

	return 0;
}