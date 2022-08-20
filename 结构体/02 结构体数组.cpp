#include<iostream>
#include<string>
using namespace std;

// 结构体定义
struct Student {
	string name; // 姓名
	int age; // 年龄
	int score; // 分数
};

int main2() {

	Student arr[3] = {
		{"张三", 18, 80},
		{"李四", 19, 60},
		{"王五", 20, 59}
	};

	arr[2].name = "赵六";
	arr[2].age = 99;
	arr[2].score = 0;

	int sizeTotal = sizeof(arr);
	int sizeOne = sizeof(arr[0]);
	int length = sizeTotal / sizeOne;

	for (int i = 0; i < length; i++) {
		Student tmp = arr[i];
		cout << "姓名：" << tmp.name 
			<< "\t年龄：" << tmp.age 
			<< "\t分数：" << tmp.score << endl;
	}


	system("pause");

	return 0;
}