#include<iostream>
#include<string>
using namespace std;

// �ṹ�嶨��
struct Student {
	string name; // ����
	int age; // ����
	int score; // ����
};

int main2() {

	Student arr[3] = {
		{"����", 18, 80},
		{"����", 19, 60},
		{"����", 20, 59}
	};

	arr[2].name = "����";
	arr[2].age = 99;
	arr[2].score = 0;

	int sizeTotal = sizeof(arr);
	int sizeOne = sizeof(arr[0]);
	int length = sizeTotal / sizeOne;

	for (int i = 0; i < length; i++) {
		Student tmp = arr[i];
		cout << "������" << tmp.name 
			<< "\t���䣺" << tmp.age 
			<< "\t������" << tmp.score << endl;
	}


	system("pause");

	return 0;
}