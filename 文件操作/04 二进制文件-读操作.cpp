#include<iostream>
#include<fstream>
using namespace std;

class Person4 {
public:
	char m_Name[64];
	int m_Age;
};

void test04() {
	// 1������ͷ�ļ�

	// 2������������
	ifstream ifs;
	// 3�����ļ��� �ж��ļ��Ƿ�򿪳ɹ�

	ifs.open("person.txt", ios::in | ios::binary);
	if (ifs.is_open()) {
		// 4�����ļ�
		Person4 p;
		ifs.read((char*)&p, sizeof(Person4));
		cout << "����:" << p.m_Name << endl;
		cout << "����:" << p.m_Age << endl;
		// 5���ر��ļ���
		ifs.close();
	}
	else {
		cout << "�ļ���ʧ��";
		return;
	}
	
}

int main() {

	test04();

	system("pause");

	return 0;
}