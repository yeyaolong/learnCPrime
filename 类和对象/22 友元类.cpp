#include<iostream>
#include<string>
using namespace std;

class Building2; // ������һ���࣬��ֹGoodGay�б���


// ������Ԫ
class GoodGay2 {
public:
	GoodGay2();
	void visit(); // �ιۺ�������Building�е�����

	Building2* building;
};

// ������ʵ�ֹ��캯��,��һ��GoodGay��ʾ������
// ע�⣬����һ��Ҫ��������⺯���ŵ�Building2����ඨ��ĺ���
// д�������Ǵ����
//GoodGay2::GoodGay2() {
//	// ����һ�����������
//	building = new Building2;
//}
//// ����ʵ�� ��Ա����
//void GoodGay2::visit() {
//	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
//
//	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
//}

class Building2 {
	friend class GoodGay2; // GoodGay2ʵ������Ķ�����Է���Building2��private��Ա
public:
	Building2();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

// ����ʵ�ֹ��캯������һ��Building2��ʾ������
Building2::Building2() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay2::GoodGay2() {
	// ����һ�����������
	building = new Building2;
}
// ����ʵ�� ��Ա����
void GoodGay2::visit() {
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
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