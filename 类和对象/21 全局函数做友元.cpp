#include<iostream>
#include<string>
using namespace std;

class Building {
	// ȫ�ֺ���goodGay��Building�����ѣ����Է���Building�е�˽�г�Ա
	friend void goodGay(Building& building);
public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
	string m_SittingRoom; // ����
private:
	string m_BedRoom; // ����
};

// ȫ�ֺ���
void goodGay(Building &building) {
	cout << "�û���ȫ�ֺ��������ڷ��ʣ�" << building.m_SittingRoom << endl;

	cout << "�û���ȫ�ֺ��������ڷ��ʣ�" << building.m_BedRoom << endl;
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