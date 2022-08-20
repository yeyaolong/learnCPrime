#include<iostream>
#include<string>
#include <ctime>
using namespace std;

/*
结构体名称不要和其他源文件内的结构体名称冲突
*/
struct Student7 {
	string name; // 学生姓名
	int score; // 学生分数
};

struct Teacher7 {
	string name; // 老师姓名
	// Student[5] stuendtArray; // 错误写法。结构体数组不能这样定义
	Student7 studentArray[5]; // 学生列表
};

// 给老师和学生赋值的函数
void allocateSpace(struct Teacher7 tArray[], int len) {
	// 给老师赋值
	string teacherName = "ABCDEFG";
	string studentNameStr = "abcdefghijklmn";
	for (int i = 0; i < len; i++) {
		// tArray[i].name = ("Teacher_" + teacherName[i]); // 错误写法，C++这里不会把+当作字符串连接符
		tArray[i].name = "Teacher_";
		tArray[i].name += teacherName[i]; // 正确写法，先赋值，再用+=做连接功能
		// 给学生赋值
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
		cout << "老师姓名：" << tArray[i].name << endl;
		// Student s[] = tArray[i].studentArray;
		for (int j = 0; j < 5; j++) {
			cout << "\t学生姓名：" << tArray[i].studentArray[j].name <<
				"\t学生分数：" << tArray[i].studentArray[j].score << endl;
		}
	}
}

int main8() {

	// 随机数种子
	srand((unsigned int)time(NULL));

	// 创建3名老师 的数组
	struct Teacher7 tArray[3];

	// 通过函数给3名老师的信息赋值，并给老师带的学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	
	// 打印
	printInfo(tArray, len);
	system("pause");

	return 0;
}