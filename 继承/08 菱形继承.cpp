#include<iostream>
using namespace std;

// 动物类
class Animal {
public:
	int m_Age;
};
// 羊类
// 利用虚继承 解决菱形继承的问题
// 继承之前 加上关键字 virtual 变为虚继承
// Animal 类称为 虚基类
class Sheep: virtual public Animal {

};
// 骆驼类
class Tuo: virtual public Animal {

};

class YangTuo : public Sheep, public Tuo {

};
// 使用虚继承前
void test13() {
	YangTuo yt;

	yt.Sheep::m_Age = 19;
	yt.Tuo::m_Age = 20;

	// 当出现菱形继承时，两个父类拥有相同的成员，需要加作用域区分
	//cout << "yt.m_Age = " << yt.m_Age << endl; // 多继承导致的不明确，需要作用域
	cout << "yt.Sheep::m_Age" << yt.Sheep::m_Age << endl; // 19
	cout << "yt.Sheep::m_Age" << yt.Tuo::m_Age << endl; // 20

	// 这份数据只要有一份就可以了，但是菱形数据导致了这份数据有两份，导致资源浪费
	// 比如这里，羊驼有两份年龄数据
}
// 使用虚继承后
void test14() {
	YangTuo yt;

	yt.Sheep::m_Age = 19;
	yt.Tuo::m_Age = 20;
	cout << "yt.m_Age = " << yt.m_Age << endl; // 20,使用虚继承后，这里也不会有不明确的问题
	cout << "yt.Sheep::m_Age =" << yt.Sheep::m_Age << endl; // 20
	cout << "yt.Sheep::m_Age = " << yt.Tuo::m_Age << endl; // 20

}

int main() {

	test14();
	
	system("pause");

	return 0;
}