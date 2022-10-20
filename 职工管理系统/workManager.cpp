#include<iostream>
#include<string>
#include "workerManager.h";

using namespace std;

// ʵ�ֹ��캯��
WorkerManager::WorkerManager() {
	cout << "WorkerManager���캯��" << endl;

	// �ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		// ��ʼ������
		// ��ʼ����¼����
		this->m_EmpNum = 0;
		// ��ʼ������ָ��
		this->m_EmpArray = NULL;
		// ��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	else {
		char ch;
		ifs >> ch;
		// ��ȡ�ļ���β��־
		// ��Ϊֻ��ȡ��һ���ַ����ļ���ǰ������һλ�����Դ�ʱ�ж��Ƿ����ļ�β�����ж��ļ��Ƿ�Ϊ��
		if (ifs.eof()) {
			cout << "�ļ�Ϊ��!" << endl;
			// ��ʼ������
			// ��ʼ����¼����
			this->m_EmpNum = 0;
			// ��ʼ������ָ��
			this->m_EmpArray = NULL;
			// ��ʼ���ļ��Ƿ�Ϊ��
			this->m_FileIsEmpty = true;
			ifs.close();
			return;
		}
	}
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
	if (this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}


// ���ְ��
void WorkerManager::Add_Emp() {
	cout << "���������ְ��������" << endl;

	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) {
		// ���
		// ��������¿ռ��С
		int newSize = this->m_EmpNum + addNum; // �¿ռ����� = ԭ����¼���� + ��������

		// �����¿ռ�
		Worker** newSpace = new Worker* [newSize];

		// ��ԭ���ռ��е����ݿ������¿ռ���
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		// �������������
		for (int i = 0; i < addNum; i++) {
			int id; // ְ�����
			string name; // ְ������
			int dSelect; // ����ѡ��

			cout << "������� " << i + 1 << " λְ�����" << endl;
			cin >> id;

			cout << "������� " << i + 1 << " λְ������" << endl;
			cin >> name;
			
			cout << "��ѡ��� " << i + 1 << " λְ��ְλ" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			
			// ��������ְ��ָ�뱣�浽������			
			newSpace[this->m_EmpNum + i] = worker;
		}
		
		// �ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;
		// �����¿ռ�ָ��
		this->m_EmpArray = newSpace;
		// �����µ�ְ������
		this->m_EmpNum = newSize;
		
		// �����ݱ��浽�ļ���
		this->save();

		this->m_FileIsEmpty = false;

		cout << "�ɹ����" << addNum << "����ְ��" << endl;
		
	}
	else {
		cout << "������������" << endl;
	}

	// ��������� �����ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0;i < this->m_EmpNum; i++) {
		string name = this->m_EmpArray[i]->m_Name;
		int id = this->m_EmpArray[i]->m_Id;

		int deptId = this->m_EmpArray[i]->m_DeptId;

		ofs << name << "\t" << id << "\t" << deptId << endl;
	}
	ofs.close();
}