#include<iostream>
#include "workerManager.h";
using namespace std;

// չʾϵͳ�˵�
void showMenu(WorkerManager &wm) {
	wm.Show_Menu();
	char opt;	// ��������char������int����Ϊcharռ���ڴ��С
	
	while (true) {
		cout << "������ѡ��" << endl;
		cin >> opt;
		switch (opt) {
		case '0':
			// �˳�
			wm.Exit();
			break;
		case '1':
			// ���ְ��
			break;
		case '2':
			// ��ʾְ��
			break;
		case '3':
			// ɾ��ְ��
			break;
		case '4':
			// �޸�ְ��
			break;
		case '5':
			// ����ְ��
			break;
		case '6':
			// ��ְ������
			break;
		case '7':
			// ����ĵ�
			break;
		default:
			// ����
			system("cls");
			break;
		}
	}
	
}

int main() {

	WorkerManager wm;

	showMenu(wm);

	system("pause");

	return 0;
}