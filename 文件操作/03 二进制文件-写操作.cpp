#include<iostream>
#include<fstream>
using namespace std;

// �������ļ� д�ļ�
class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test03() {
	// 1������ͷ�ļ�

	// 2������������
	ofstream ofs;
	// Ҳ����ֱ���ڴ�������ʱֱ��ָ���ļ�·���ʹ򿪷�ʽ
	//ofstream ofs2("person.txt", ios::out | ios::binary);
	// 3�����ļ�
	ofs.open("person.txt", ios::out | ios::binary);
	// 4��д�ļ�
	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(Person));
	// 5���ر���
	ofs.close();
}

int main() {

	test03();

	system("pause");

	return 0;
}