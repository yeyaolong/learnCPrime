#include<iostream>
#include<string>
using namespace std;

// �ṹ�嶨��
struct Student {
	string name; // ����
	int age; // ����
	int score; // ����
};

int main3() {

	// ����ѧ���ṹ�����
	struct Student s1 = { "����", 18, 100 };
	// ͨ��ָ��ָ��ṹ�����
	// int* p = &s1; // ָ�����Ͳ����� //����ʼ����: �޷��ӡ�Student *��ת��Ϊ��int *��
	Student* p = &s1;
	cout << sizeof(p) << endl; // ���۽ṹ���ô�Ĵ�ָ����x86 4�ֽڣ� x64 8�ֽ�
	// ͨ��ָ����ʽṹ������е�����
	// ͨ����ͷ -> �������
	cout << "������" << p->name << "\t���䣺" << p->age << "\t������" << p->score << endl;
	// ������������
	cout << "������" << ( * p).name << "\t���䣺" << ( * p ).age << "\t������" << ( * p ).score << endl;
	system("pause");

	return 0;
}