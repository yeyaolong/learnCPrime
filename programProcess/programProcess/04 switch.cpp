#include<iostream>
#include<string>
using namespace std;

int main4() {

	cout << "�����Ӱ���(10����):" << endl;

	int score = 0;

	cin >> score;
	string str = "��Ƭ";
	if (score > 10) {
		score = 10;
	}
	switch (score) {
	case 10:
	case 9:
		str = "����";
		break;
	case 8:
	case 7:
		str = "�ǳ���";
		break;
	case 6:
	case 5:
		str = "һ��";
		break;
	default:
		str = "��Ƭ";
		break;
	}

	cout << "���Ե�Ӱ�������ǣ�" << str << endl;

	// switchȱ��
	// �жϷ�ֻ֧�������ͻ��ַ��ͣ�����������
	// switch�ŵ�
	// �ṹ������ִ��Ч�ʸ�


	system("pause");

	return 0;
}