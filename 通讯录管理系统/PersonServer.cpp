#include<iostream>
#include "person.h"

using namespace std;


Person personArray[1000];

int addressBookSize = 0;

Person* initPerson(Person* person) {

	cout << "��������ϵ��������" << endl;
	cin >> person->name;
	cout << "��������ϵ���Ա�" << endl;
	cin >> person->sex;
	while (true) {
		if (person->sex != "��" && person->sex != "Ů") {
			cout << "��������ȷ���Ա��� or Ů" << endl;
			cin >> person->sex;
		}
		else {
			break;
		}
	}


	cout << "��������ϵ�����䣺" << endl;
	cin >> person->age;
	cout << "��������ϵ�˵绰��" << endl;
	cin >> person->phone;
	cout << "��������ϵ�˼�ͥסַ��" << endl;
	cin >> person->address;

	return person;
}

void addPerson() {
	Person person;
	if (addressBookSize <= ADDRESS_BOOK_MAX) {
		cout << "���ڽ��������ϵ�ˣ�" << endl;
		
		initPerson(&person);
		
		personArray[addressBookSize] = person;
		addressBookSize++;
		cout << "��ӳɹ�" << endl;
		system("pause"); // �밴���������
		system("cls");
	}
	else {
		cout << "ͨѶ¼����" << endl;
	}
	

}
/**
* @description ��ʾ������ϵ�� 
*/
void showAllPerson() {
	if (addressBookSize == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < addressBookSize; i++) {
			if (personArray[i].name == "") {
				break;
			}
			Person* person = &personArray[i];
			cout << "������" << person->name
				<< "\t�Ա�" << person->sex
				<< "\t���䣺" << person->age
				<< "\t��ϵ�绰��" << person->phone
				<< "\t��ַ��" << person->address << endl;
		}
	}
	
	system("pause"); // �밴���������
	system("cls");
}
/**
* ͨ������ɾ����ϵ��
*/
void deletePersonByName(string name) {
	int deletePersonIndex = isExit(name);
	if (deletePersonIndex >= 0 && deletePersonIndex < addressBookSize - 1) {
		for (int i = deletePersonIndex; i <= addressBookSize - 1; i++) {
			personArray[i] = personArray[i + 1];
		}
		cout << "ɾ���ɹ�" << endl;
		addressBookSize--;
	}
	else if (deletePersonIndex >= 0 && deletePersonIndex == addressBookSize - 1) {
		personArray[deletePersonIndex] = { "", "", 0, "", ""};
		cout << "ɾ���ɹ�" << endl;
		addressBookSize--;
	}
	else {
		cout << "δ�ҵ�����ϵ��" << endl;
	}

	system("pause");
	system("cls");
}

int isExit(string name) {
	Person* person = NULL;
	if (name != "") {

		for (int i = 0; i < ADDRESS_BOOK_MAX; i++) {
			if (name == personArray[i].name) {
				return i;
			}
		}

	}

	cout << "��ѯʧ��" << endl;

	return -1;
}

int selectPersonByName(string name) {
	int ind = isExit(name);
	Person* person = &personArray[ind];
	if (ind > -1) {
		cout << "������" << person->name
			<< "\t�Ա�" << person->sex
			<< "\t���䣺" << person->age
			<< "\t��ϵ�绰��" << person->phone
			<< "\t��ַ��" << person->address << endl;
	}
	
	system("pause");
	system("cls");
	return ind;
}

void editPersonByName(string name) {
	Person person;
	int editPersonIndex = isExit(name);
	if (editPersonIndex >= 0) {
		initPerson(&person);

		personArray[editPersonIndex] = person;
	}
	else {
		cout << "��ѯʧ��" << endl;
	}

	system("pause");
	system("cls");
	

}

void clearAllPerson() {
	// �����Ƿ��ÿգ�personArray[1000]�ڳ������ǰ�ڴ涼�����ͷ�
	// ������������ÿմ���д��д����ν
	/*for (int i = 0; i < addressBookSize; i++) {
		personArray[i] = { "", "", 0, "", "" };
	}*/
	cout << "ȷ�����������ϵ�� Y/N���ܼƣ�" << addressBookSize << "��" << endl;
	string flag ="N";
	cin >> flag;

	if (flag == "Y") {
		addressBookSize = 0;
		cout << "������" << endl;
	}

	

	system("pause");
	system("cls");

}
