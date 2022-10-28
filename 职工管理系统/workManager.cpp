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
// չʾ����ְ��
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
		system("pause");
		system("cls");
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

void WorkerManager::Mod_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�޸Ĳ����ڻ��¼Ϊ��" << endl;
	}
	else {
		// ����ְ�����ɾ��
		cout << "��ɾ����Ҫ�޸ĵ�ְ����ţ�" << endl;
		int id = -1;
		cin >> id;

		int index = this->IsExit(id);

		if (index != -1) {
			// ְ������
			string name;
			int dId;
			
			cout << "���޸�ְ��������" << endl;
			cin >> name;
			cout << "���޸�ְ����λ��1��Ա����2�����ž���3���ϰ�" << endl;
			cin >> dId;
			if (dId != 1 && dId != 2 && dId != 3) {
				cout << "ְ�������쳣" << endl;
				return;
			}
			// ��Ϊ����Worker* ָ�룬����ֱ���޸�worker��Ա���ԣ������У����ǲ��淶
			// Ա����ְλ���ܷ����ı䣬���ԣ�Ӧ����Ҫ��Ӧ�Ĳ�ְͬλ�����
			// ���Զ�Ӧ�����showInfo���������õĻ�����ԭ�������showInfo
			// ���磬����ԭ����Ա��,dId = 1����ʱ���õľ��� employee.showInfo
			// ���ǣ��޸ĺ���������˾���,dId = 2�����Ǵ�ʱ������Ȼ�� employee.showInfo��������manager.showInfo
			/*
			this->m_EmpArray[index]->m_Name = name;
			this->m_EmpArray[index]->m_DeptId = dId;
			*/
			Worker* worker = NULL;
			switch (dId) {
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
			delete this->m_EmpArray[index];
			this->m_EmpArray[index] = worker;
			// ���ݸ��µ��ļ���
			this->save();

			cout << "�޸ĳɹ�" << endl;
		}
		else {
			cout << "�޸�ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	// �����������
	system("pause");
	system("cls");
}
// ����ְ��
Worker* WorkerManager::Find_Emp() {
	Worker* worker = NULL;

	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else {
		cout << "��������ҷ�ʽ��" << endl;
		cout << "1������ְ����Ų���" << endl;
		cout << "2������ְ����������" << endl;

		int select = 0;

		cin >> select;

		// �����Ƿ�鵽�ı�־
		bool flag = false;
		
		if (select == 1) {
			int id;
			cout << "������ְ���ı�ţ�" << endl;
			cin >> id;

			int ret = IsExit(id);
			if (ret != -1) {
				cout << "���ҳɹ�������Ϣ����:" << endl;
				worker = this->m_EmpArray[ret];

				worker->showInfo();
				flag = true;
			}
			else {
				cout << "���޴���" << endl;
			}
		}
		else if (select == 2) {
			string name;
			cout << "��������ҵ�������" << endl;

			cin >> name;
			
			for (int i = 0; i < m_EmpNum; i++) {
				if (this->m_EmpArray[i]->m_Name == name) {
					// ������д������Ȼ�ܲ������˲�չʾ����ʵ���ϣ�ֻ�᷵�����һ��Ա��
					worker = this->m_EmpArray[i];
					worker->showInfo();
					flag = true;
				}
			}
			if (!flag) {
				cout << "���޴���" << endl;
			}
		}
		else {
			cout << "����ѡ������,����������" << endl;
			worker = Find_Emp();
		}
	}




	return worker;

}

void WorkerManager::Sort_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else {
		cout << "��ѡ������ʽ��" << endl;
		cout << "1��ְ������������" << endl;
		cout << "2��ְ���Ž�������" << endl;

		int select = 0;

		cin >> select;

		for (int i = 0; i < m_EmpNum; i++) {
			int minOrMax = i; // ������Сֵ�����ֵ�±�
			for (int j = i + 1; j < this->m_EmpNum; j++) {
				if (select == 1) {
					// ����
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id) {
						minOrMax = j;
					}
				}
				else if (select == 2) {
					// ����
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id) {
						minOrMax = j;
					}
				}
			}

			// �ж�һ��ʼ�϶�����Сֵ�����ֵ�ǲ��Ǽ������Сֵ��������ǣ���������
			if (i != minOrMax) {
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}

		cout << "����ɹ�!�����Ľ��Ϊ��" << endl;

		this->save(); // �����Ľ���ŵ��ļ���
		this->Show_Emp();
	}
}


void WorkerManager::Clear_File() {
	cout << "�Ƿ�ȷ����գ�Y/N" << endl;
	string confirm;

	cin >> confirm;
	if (confirm == "y" || confirm == "Y") {
		ofstream ofs(FILENAME, ios::trunc); // ɾ���ļ������´���
		ofs.close();
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
			cout << "��ճɹ�" << endl;
		}
		system("pause");
		system("cls");
	}
	else if (confirm == "n" || confirm == "N") {

	}
}

// ʵ����������
WorkerManager::~WorkerManager() {
	cout << "WorkerManager��������" << endl;
	if (this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}