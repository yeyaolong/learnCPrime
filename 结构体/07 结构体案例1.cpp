#include<iostream>
#include<string>
#include <ctime>
using namespace std;

/*
�ṹ�����Ʋ�Ҫ������Դ�ļ��ڵĽṹ�����Ƴ�ͻ
*/
struct Student7 {
	string name; // ѧ������
	int score; // ѧ������
};

struct Teacher7 {
	string name; // ��ʦ����
	// Student[5] stuendtArray; // ����д�����ṹ�����鲻����������
	Student7 studentArray[5]; // ѧ���б�
};

// ����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher7 tArray[], int len) {
	// ����ʦ��ֵ
	string teacherName = "ABCDEFG";
	string studentNameStr = "abcdefghijklmn";
	for (int i = 0; i < len; i++) {
		// tArray[i].name = ("Teacher_" + teacherName[i]); // ����д����C++���ﲻ���+�����ַ������ӷ�
		tArray[i].name = "Teacher_";
		tArray[i].name += teacherName[i]; // ��ȷд�����ȸ�ֵ������+=�����ӹ���
		// ��ѧ����ֵ
		for (int j = 0; j < 5; j++) {
			string studentName = "Student_";
			studentName += studentNameStr[j];
			int randScore = rand() % 61 + 40;
			tArray[i].studentArray[j] = {
				studentName,
				randScore
			};
		}
	}
}

void printInfo(Teacher7 tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������" << tArray[i].name << endl;
		// Student s[] = tArray[i].studentArray;
		for (int j = 0; j < 5; j++) {
			cout << "\tѧ��������" << tArray[i].studentArray[j].name <<
				"\tѧ��������" << tArray[i].studentArray[j].score << endl;
		}
	}
}

int main8() {

	// ���������
	srand((unsigned int)time(NULL));

	// ����3����ʦ ������
	struct Teacher7 tArray[3];

	// ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	
	// ��ӡ
	printInfo(tArray, len);
	system("pause");

	return 0;
}