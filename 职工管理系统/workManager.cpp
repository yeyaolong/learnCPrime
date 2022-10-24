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
	// �ļ������ڣ������ּ�¼����
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ�� " << num << endl;
	this->m_EmpNum = num;

	// ���ٿռ�
	this->m_EmpArray = new Worker* [this->m_EmpNum];
	// ���ļ������ݴ�ŵ�������
	this->init_Emp();
	cout << "������" << this->m_EmpArray[0]->m_Name << endl;
	for (int i = 0; i < this->m_EmpNum; i++) {
		this->m_EmpArray[i]->showInfo();
		
		/*cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id
			<< "������" << this->m_EmpArray[i]->m_Name
			<< "���ű�ţ�" << this->m_EmpArray[i]->m_DeptId
			<< endl;*/
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

		ofs << name << " " << id << " " << deptId << endl;
	}
	ofs.close();
}
// ͳ������
int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;


	int num = 0;
	if (ifs.is_open()) {
		// ��Ƶ����ʦ��д��
		// ��һ�е����ݣ��о�����һ������һ�е����ݶ��������۰���Ϊɶ��ֱ��ͳ��������
		// >> ���ֶ��������Ƕ����ո����������������һ��Ҫ��3��
		// ��������д���и�������ǣ���������г���Ȼ��ѡ�� Add_Emp �����Ա�� �ǲ��ᱻ�����
		// ��Ϊ�ҵ� WorkerManager::save �������Ĳ��ǿո� ���� '\t'
		/*while (ifs >> name && ifs >> id && ifs >> dId) {
			num++;
		}*/

		//****************** ���Լ����Ե� ����д�� ��ʼ*******************
		//Worker worker; // ������workerȥ���գ���Ϊ worker��������
		//Employee emp; // Ҳ������Employee��Manager��Bossȥ���գ���Ϊû������Ĭ�Ϲ��캯��
		
		//ifs.getline(*worker, sizeof(Employee))
		//****************** ���Լ����Ե� ����д�� ����*******************

		string buf;
		// ���getline��basic_istream�е�getline������Ҫ�� ifs.getline ����
		while (getline(ifs, buf)) {
			num++;
		}
	}
	
	ifs.close();

	return num;
	
}
// ��ʼ��Ա��
void WorkerManager::init_Emp() {


	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	string buf;
	int index = 0;
	while (ifs >> name && ifs >> id && ifs >> dId) {
		Worker* worker = NULL;

		
		if (dId == 1) {
			// ��ְͨ��
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) {
			// ����
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3) {
			// �ϰ�
			worker = new Boss(id, name, dId);
		}
		
		
		/*cout << "��ʼ����" << index 
			<< "Ա������:" << worker->m_Name
			<< "Ա��id:" << worker->m_Id
			<< endl;*/
		this->m_EmpArray[index] = worker;
		index++;


	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		return;
	}
	for (int i = 0; i < this->m_EmpNum;i++) {
		// ���ö�̬���ó���ӿ�
		this->m_EmpArray[i]->showInfo();
	}

	system("pause");
	system("cls");

}


int WorkerManager::IsExit(int id) {
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++) {
		if (this->m_EmpArray[i]->m_Id == id) {
			// �ҵ�ְ��
			index = i;

			break;
		}
	}

	return index;
}

void WorkerManager::Del_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else {
		// ����ְ�����ɾ��
		cout << "��ɾ����Ҫɾ����ְ����ţ�" << endl;
		int id = -1;
		cin >> id;

		int index = this->IsExit(id);

		if (index != -1) {
			// ְ������
			for (int i = index; i < this->m_EmpNum - 1; i++) {
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			if (this->m_EmpNum == 0) {
				this->m_FileIsEmpty = true;
			}
			// ���ݸ��µ��ļ���
			this->save();

			cout << "ɾ���ɹ�" << endl;
		}
		else {
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	// �����������
	system("pause");
	system("cls");
}

// ʵ����������
WorkerManager::~WorkerManager() {
	cout << "WorkerManager��������" << endl;
	if (this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}