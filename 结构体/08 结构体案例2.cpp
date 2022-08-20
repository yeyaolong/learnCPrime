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
			// 这种写法无法实现排序,因为这里的赋值是值传递
			/*
			Hero h1 = hArray[j]; // 这里是值传递，所以下面即便做了交换，也不会对hArray数组产生影响
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
		cout << "姓名：" << h1.name << "\t年龄：" << h1.age << "\t性别：" << h1.sex << endl;
	}
}

int main() {

	Hero hArray[5] = {
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"貂蝉", 19, "女"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		
	};

	int length = sizeof(hArray) / sizeof(hArray[0]);

	bubbleSort(hArray, length);

	printInfo(hArray, length);

	system("pause");

	return 0;
}