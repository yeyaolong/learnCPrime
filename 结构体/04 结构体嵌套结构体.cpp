#include<iostream>
#include<string>
using namespace std;
/*
�ṹ���еĳ�Ա��������һ���ṹ��
*/

// ����һ��ѧ���ṹ��
// Ҫ�ȶ���һ��ѧ���ṹ�壬��Ϊ������ʦ�ṹ��ʹ����ѧ��
struct Student {
	string name; // ����
	int age; // ����
	int score; // ����
};

// ����һ����ʦ�ṹ��
struct Teacher {
	int id; // ��ְ�����
	string name;
	int age;
	struct Student stu;
};


int main4() {

	Teacher t;
	t.id = 1000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 10;
	t.stu.score = 60;

	cout << "��ʦ������" << t.name << "\t��ʦ��ţ�" << t.id << "\t��ʦ���䣺" << t.age
		<< "\n��ʦ������ѧ��������" << t.stu.name << "\tѧ�����䣺" << t.stu.age 
		<< "\tѧ��������" << t.stu.score << endl;

	system("pause");

	return 0;
}