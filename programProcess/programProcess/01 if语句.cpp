#include<iostream>

using namespace std;

int main1() {

	// ѡ��ṹ ����if���
	// �û���������������������600����Ϊ����һ����ѧ
	const int score1 = 600;
	const int score2 = 500;
	const int score3 = 400;
	int userScore = 0;
	cout << "���������" << endl;
	cin >> userScore;
	cout << "������ķ���Ϊ��" << userScore << endl;

	if (userScore > score1) {
		// ��������ʱִ��
		cout << "��������һ����ѧ" << endl;
		if (userScore > 700) {
			cout << "�������˱���" << endl;
		}
		else if (userScore > 650) {
			cout << "���������廪" << endl;
		}
		else {
			cout << "�����������" << endl;
		}
	}
	else if (userScore > score2) {
		cout << "�������˶�����ѧ" << endl;
	}
	else if (userScore > score3) {
		cout << "��������������ѧ" << endl;
	}
	else {
		// ����������ʱִ��
		const int gap = score3 - userScore + 1;
		cout << "�ÿ�ϧ����" << gap << "�ֿ��ϴ�ѧ" << endl;
	}
	system("pause");

	return 0;
}