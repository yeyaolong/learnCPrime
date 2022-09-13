#include<iostream>
#include<string>
using namespace std;

class Building2; // 先声明一个类，防止GoodGay中报错


// 类做友元
class GoodGay2 {
public:
	GoodGay2();
	void visit(); // 参观函数访问Building中的属性

	Building2* building;
};

// 在类外实现构造函数,第一个GoodGay表示作用域
// 注意，这里一定要将这个类外函数放到Building2这个类定义的后面
// 写在这里是错误的
//GoodGay2::GoodGay2() {
//	// 创建一个建筑物对象
//	building = new Building2;
//}
//// 类外实现 成员函数
//void GoodGay2::visit() {
//	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
//
//	cout << "好基友正在访问：" << building->m_BedRoom << endl;
//}

class Building2 {
	friend class GoodGay2; // GoodGay2实例化后的对象可以访问Building2的private成员
public:
	Building2();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

// 类外实现构造函数，第一个Building2表示作用域
Building2::Building2() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay2::GoodGay2() {
	// 创建一个建筑物对象
	building = new Building2;
}
// 类外实现 成员函数
void GoodGay2::visit() {
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test24() {
	GoodGay2 gg;

	gg.visit();
}

int main22() {

	test24();

	system("pause");

	return 0;
}