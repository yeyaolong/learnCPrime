#include<iostream>
#include<string>
using namespace std;

class Building3;

class GoodGay3 {
public:
	GoodGay3();

	Building3* building;

	void visit(); // ��visit���Է���Building3�е�˽�г�Ա
	void visit2(); // visit2�����Է���Building3�е�˽�г�Ա
};



class Building3 {
	// ���߱����� GoodGay3���������µ�visit�������Է���Building3�е�˽������
	friend void GoodGay3::visit();
public:

	Building3();

	string m_SittingRoom;
private:
	string m_BedRoom;
};
// ����ʵ�ֹ��캯��
Building3::Building3() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay3::GoodGay3() {
	building = new Building3;
}

void GoodGay3::visit() {
	cout << "visit �������ڷ���" << building->m_SittingRoom << endl;
	cout << "visit �������ڷ���" << building->m_BedRoom << endl;
}
void GoodGay3::visit2() {
	cout << "visit2 �������ڷ���" << building->m_SittingRoom << endl;
	//cout << "visit2 �������ڷ���" << building->m_BedRoom << endl;
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