#include<iostream>
#include<string>
using namespace std;

// ���һ��ѧ���࣬������������ѧ��
// ���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��


class Student {
private:
	// ���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	// ���� ��Ա���� ��Ա����
	// ��Ϊ ��Ա���� ��Ա����
	string stuName;
	int stuNo;
public:	// ����Ȩ��

	string getStuName() {
		return stuName;
	}
	void setStuName(string name) {
		stuName = name;
	}

	int getStuNo() {
		return stuNo;
	}
	void setStuNo(int number) {
		stuNo = number;
	}


};

int main() {
	// ʵ����
	Student stu;

	stu.setStuName("����");
	stu.setStuNo(1);


	//cout << "stuName = " << stu.stuName << "\tstuNo = " << stu.stuNo << endl; // private���Բ���ֱ�ӻ��

	cout << "stuName = " << stu.getStuName() << "\tstuNo = " << stu.getStuNo() << endl;

	Student stu2;
	stu2.setStuName("����");
	stu2.setStuNo(2);
	cout << "stuName = " << stu2.getStuName() << "\tstuNo = " << stu2.getStuNo() << endl;
	system("pause");

	return 0;
}