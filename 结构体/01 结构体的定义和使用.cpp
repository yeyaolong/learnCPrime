#include<iostream>
#include<string>
using namespace std;

/*
�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������
ͨ���ṹ�崴�������ķ�ʽ������
- struct �ṹ���� ������
- struct �ṹ���� ������ = { ��Ա1ֵ, ��Ա2ֵ, ... }
- ����ṹ��ʱ˳�㴴������
*/

// �ṹ�嶨��
struct Student {
	string name; // ����
	int age; // ����
	int score; // ����
}s3; // ����ṹ��ʱ˳�㴴��һ���ṹ�����

int main1() {
	
	// ͨ���ṹ�崴������ѧ��
	// struct Student s1; // struct �ؼ��ֿ���ʡ��
	Student s1;
	s1.name = "����";
	s1.age = 28;
	s1.score = 59;

	cout << "������" << s1.name << "\t���䣺" << s1.age << "\t������" << s1.score << endl;

	struct Student s2 = {"����", 28, 58 }; // ��˳��������
	
	cout << "������" << s2.name << "\t���䣺" << s2.age << "\t������" << s2.score << endl;

	s3.name = "����";
	s3.age = 20;
	s3.score = 57;

	cout << "������" << s3.name << "\t���䣺" << s3.age << "\t������" << s3.score << endl;

	system("pause");

	return 0;
}