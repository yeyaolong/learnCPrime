#include<iostream>
// #include<time.h> // ��<time.h>���ǲ�����<time>
#include<ctime>
using namespace std;


int main6() {

	int flag = true;
	int count = 0; // �²����
	// int num = rand()%100 + 1; // ����һ��1~100�������(Ȼ�����������ÿ�ζ���42)
	srand((unsigned int)time(NULL)); // ��Ҫ��ע��һ������
	int num = rand() % 100 + 1;
	int userNum = 0; // ��Ҳµ���ֵ
	while (flag) {
		cout << "������һ������:" << endl;
		cin >> userNum;
		if (userNum > num) {
			cout << "����" << endl;
			count++;
		}
		else if (userNum < num) {
			cout << "����" << endl;
			count++;
		}
		else {
			cout << "��ϲ���¶��ˣ���һ������" << count << "��" << endl;
			flag = false;
		}
		
	}

	system("pause");

	return 0;
}