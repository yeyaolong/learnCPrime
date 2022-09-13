#include<iostream>
#include<string>
using namespace std;

class Building3;

class GoodGay3 {
public:
	GoodGay3();

	Building3* building;

	void visit(); // 让visit可以访问Building3中的私有成员
	void visit2(); // visit2不可以访问Building3中的私有成员
};



class Building3 {
	// 告诉编译器 GoodGay3类作用域下的visit函数可以访问Building3中的私有内容
	friend void GoodGay3::visit();
public:

	Building3();

	string m_SittingRoom;
private:
	string m_BedRoom;
};
// 类外实现构造函数
Building3::Building3() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay3::GoodGay3() {
	building = new Building3;
}

void GoodGay3::visit() {
	cout << "visit 函数正在访问" << building->m_SittingRoom << endl;
	cout << "visit 函数正在访问" << building->m_BedRoom << endl;
}
void GoodGay3::visit2() {
	cout << "visit2 函数正在访问" << building->m_SittingRoom << endl;
	//cout << "visit2 函数正在访问" << building->m_BedRoom << endl;
}


void test25() {
	GoodGay3 gg;
	gg.visit();
	gg.visit2();
}

int main() {

	test25();

	system("pause");

	return 0;
}