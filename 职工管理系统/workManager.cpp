#include "workerManager.h";

// ʵ�ֹ��캯��
WorkerManager::WorkerManager() {
	cout << "WorkerManager���캯��" << endl;
}


// չʾ�˵�
void WorkerManager::Show_Menu() {
	cout << "******************************************" << endl;
	cout << "********** ��ӭʹ��ְ������ϵͳ **********" << endl;
	cout << "************ 0. �˳�������� *************" << endl;
	cout << "************ 1. ����ְ����Ϣ *************" << endl;
	cout << "************ 2. ��ʾְ����Ϣ *************" << endl;
	cout << "************ 3. ɾ����ְְ�� *************" << endl;
	cout << "************ 4. �޸�ְ����Ϣ *************" << endl;
	cout << "************ 5. ����ְ����Ϣ *************" << endl;
	cout << "************ 6. ���ձ������ *************" << endl;
	cout << "************ 7. ��������ĵ� *************" << endl;
	cout << "******************************************" << endl;
}

// �˳�����
void WorkerManager::Exit() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

// ʵ����������
WorkerManager::~WorkerManager() {
	cout << "WorkerManager��������" << endl;
}