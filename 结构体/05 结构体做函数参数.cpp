#include<iostream>
#include<string>
using namespace std;

struct Student {
	string name; // ����
	int age; // ����
	int score; // ����
};
// ֵ����
// ֵ���ݻ�copyһ�����ݷŵ��ڴ��У�������ڴ���˷ѡ�
// �����ǵ�һ���ṹ��ǳ����ӣ����һ���һ���ṹ������ʱ������һ����ȫ��ͬ�����ݾ��Ե÷ǳ��˷�
void printStudent1(Student s) {
	s.name = "����";
	cout << "printStudent1�����д�ӡ�Ľ�� ������" << s.name << "\t���䣺" << s.age << "\t������" << s.score << endl;
}

// ��ַ����
// �������е��βθ�Ϊָ�룬���Լ����ڴ�ռ�
void printStudent2(Student* s) {
	(* s).name = "����";
	s->age = 30;
	cout << "printStudent2�����д�ӡ�Ľ�� ������" << s->name << "\t���䣺" << s->age << "\t������" << s->score << endl;
}
int main5() {
	// �ṹ������������
	// ��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	// �����ṹ�����
	Student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;

	printStudent1(s); // ֵ���� ����ı�ʵ��
	cout << "main�����д�ӡ�Ľ�� ������" << s.name << "\t���䣺" << s.age << "\t������" << s.score << endl;
	// ��ַ����
	Student* stu_poinst = &s;
	printStudent2(stu_poinst); // ��ַ���ݻ�ı�ʵ��
	cout << "main�����д�ӡ�Ľ�� ������" << s.name << "\t���䣺" << s.age << "\t������" << s.score << endl;

	system("pause");

	return 0;
}