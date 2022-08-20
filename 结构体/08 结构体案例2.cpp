#include<iostream>
#include<string>
using namespace std;

struct Hero {
	string name;
	int age;
	string sex;
};


void bubbleSort(Hero hArray[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			// ����д���޷�ʵ������,��Ϊ����ĸ�ֵ��ֵ����
			/*
			Hero h1 = hArray[j]; // ������ֵ���ݣ��������漴�����˽�����Ҳ�����hArray�������Ӱ��
			Hero h2 = hArray[j+1];
			if (h1.age > h2.age) {
				Hero tmp = h1;
				h1 = h2;
				h2 = tmp;
			}*/
			if (hArray[j].age > hArray[j + 1].age) {
				Hero tmp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = tmp;
			}
		}
	}
}

void printInfo(Hero hArray[], int length) {
	for (int i = 0; i < length; i++) {
		Hero h1 = hArray[i];
		cout << "������" << h1.name << "\t���䣺" << h1.age << "\t�Ա�" << h1.sex << endl;
	}
}

int main() {

	Hero hArray[5] = {
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"����", 19, "Ů"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		
	};

	int length = sizeof(hArray) / sizeof(hArray[0]);

	bubbleSort(hArray, length);

	printInfo(hArray, length);

	system("pause");

	return 0;
}