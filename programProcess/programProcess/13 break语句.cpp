#include<iostream>
using namespace std;

int main13() {
	// 1��������switch�����
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;
	int select;
	cin >> select;
	switch (select) {
	case 1:
		cout << "��ѡ������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ�����е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ���������Ѷ�" << endl;
		break;
	default:
		cout << "��ѡ�����е��Ѷ�" << endl;
		break;
	}

	// 2��������ѭ�������
	for (int i = 0; i < 10; i++) {
		if (i > 5) {
			break;
		}
		cout << i << endl;
	}
	// 3��������Ƕ��ѭ����,���˳��ڲ�ѭ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*\t";
		}
		cout << endl;
	}

	return 0;

}