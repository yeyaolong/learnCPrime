#include<iostream>
// #include<time.h> // 用<time.h>但是不能用<time>
#include<ctime>
using namespace std;


int main6() {

	int flag = true;
	int count = 0; // 猜测次数
	// int num = rand()%100 + 1; // 生成一个1~100的随机数(然而并不随机，每次都是42)
	srand((unsigned int)time(NULL)); // 需要先注入一个种子
	int num = rand() % 100 + 1;
	int userNum = 0; // 玩家猜的数值
	while (flag) {
		cout << "请输入一个数字:" << endl;
		cin >> userNum;
		if (userNum > num) {
			cout << "高了" << endl;
			count++;
		}
		else if (userNum < num) {
			cout << "低了" << endl;
			count++;
		}
		else {
			cout << "恭喜您猜对了，您一共猜了" << count << "次" << endl;
			flag = false;
		}
		
	}

	system("pause");

	return 0;
}