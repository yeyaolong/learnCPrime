#include<iostream>
#include "workerManager.h";
#include "employee.h";
#include "manager.h";
#include "boss.h";
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
			wm.Add_Emp();
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

	

	Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();

	
	Worker* manager = new Manager(2, "����", 2);
	manager->showInfo();

	Worker* boss = new Boss(3, "����", 3);
	boss->showInfo();

	/*Boss* boss2 = new Boss(4, "����", 4);
	boss2->showInfo();*/
	
	WorkerManager wm;
	showMenu(wm);

	system("pause");

	return 0;
}