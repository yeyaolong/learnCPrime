#include<iostream>
#include<string>
#include"person.h"
using namespace std;

/**
* ϵͳ����Ҫʵ�ֵĹ������£�
*	�����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ����ཨ��1000��
*	��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
*	ɾ����ϵ�ˣ�������������ɾ����ϵ��
*	������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
*	�޸���ϵ�ˣ��������������޸�ָ����ϵ��
*	�����ϵ�ˣ����ͨѶ¼��������Ϣ
*	�˳�ͨѶ¼
*/



void showMenu() {
	cout << "������˵�" << endl;
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 7���˳�ϵͳ   *****" << endl;
	cout << "*************************" << endl;

}

int main() {

	int menuId = 0;
	bool flag = true;

	while (flag) {
		cout << endl;
		showMenu();
		cin >> menuId;

		switch (menuId) {
			case 1:
				// �����ϵ��
				addPerson();
				break;
			case 2:
				// ��ʾ��ϵ��
				showAllPerson();
				break;
			case 3:
			{
				// ���case������������ʼ������Ҫ������case�ô�����������
				// ɾ����ϵ��
				cout << "��������ϵ��������" << endl;
				string name = "";
				cin >> name;
				deletePersonByName(name);
				break;
			}
				
			case 4:
			{
				
				// ������ϵ��
				cout << "��������ϵ��������" << endl;
				string name = "";
				cin >> name;
				selectPersonByName(name);
				break;
			}
				
			case 5:
			{
				// �޸���ϵ��
				cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
				string name = "";
				cin >> name;
				editPersonByName(name);
				break;
			}
				
			case 6:
				// �����ϵ��
				clearAllPerson();
				break;
			case 7:
				// �˳�ϵͳ
				cout << "ϵͳ���˳�����л����ʹ��" << endl;
				flag = false;
				break;
			default:
				continue;
		}

	}

	return 0;
}