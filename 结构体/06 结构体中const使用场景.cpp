#include<iostream>
#include<string>
using namespace std;

// const��ʹ�ó���

struct Student {
	string name; // ����
	const int age; // ����
	int score; // ����
};

void printStudent(Student* s) {
	// s->age = 100; // const �����޸�
	cout << "������" << s->name << "\t���䣺" << s->age << "\t������" << s->score << endl;
}


int main6() {

	struct Student s = { "����", 20, 99 };

	// ͨ��������ӡ�ṹ����Ϣ
	printStudent(&s);

	system("pause");

	return 0;
}