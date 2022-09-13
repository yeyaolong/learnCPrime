#include<iostream>
#include<string>
using namespace std;

class Building {
	// 全局函数goodGay是Building好朋友，可以访问Building中的私有成员
	friend void goodGay(Building& building);
public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	string m_SittingRoom; // 客厅
private:
	string m_BedRoom; // 卧室
};

// 全局函数
void goodGay(Building &building) {
	cout << "好基友全局函数，正在访问：" << building.m_SittingRoom << endl;

	cout << "好基友全局函数，正在访问：" << building.m_BedRoom << endl;
}

void test23() {
	Building building;

	goodGay(building);
}

int main21() {
	
	test23();

	system("pause");

	return 0;
}