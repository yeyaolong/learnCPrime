#include<iostream>
#include "person.h"

using namespace std;


Person personArray[1000];

int addressBookSize = 0;

Person* initPerson(Person* person) {

	cout << "请输入联系人姓名：" << endl;
	cin >> person->name;
	cout << "请输入联系人性别：" << endl;
	cin >> person->sex;
	while (true) {
		if (person->sex != "男" && person->sex != "女") {
			cout << "请输入正确的性别，男 or 女" << endl;
			cin >> person->sex;
		}
		else {
			break;
		}
	}


	cout << "请输入联系人年龄：" << endl;
	cin >> person->age;
	cout << "请输入联系人电话：" << endl;
	cin >> person->phone;
	cout << "请输入联系人家庭住址：" << endl;
	cin >> person->address;

	return person;
}

void addPerson() {
	Person person;
	if (addressBookSize <= ADDRESS_BOOK_MAX) {
		cout << "正在进行添加联系人：" << endl;
		
		initPerson(&person);
		
		personArray[addressBookSize] = person;
		addressBookSize++;
		cout << "添加成功" << endl;
		system("pause"); // 请按任意键继续
		system("cls");
	}
	else {
		cout << "通讯录已满" << endl;
	}
	

}
/**
* @description 显示所有联系人 
*/
void showAllPerson() {
	if (addressBookSize == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < addressBookSize; i++) {
			if (personArray[i].name == "") {
				break;
			}
			Person* person = &personArray[i];
			cout << "姓名：" << person->name
				<< "\t性别：" << person->sex
				<< "\t年龄：" << person->age
				<< "\t联系电话：" << person->phone
				<< "\t地址：" << person->address << endl;
		}
	}
	
	system("pause"); // 请按任意键继续
	system("cls");
}
/**
* 通过名字删除联系人
*/
void deletePersonByName(string name) {
	int deletePersonIndex = isExit(name);
	if (deletePersonIndex >= 0 && deletePersonIndex < addressBookSize - 1) {
		for (int i = deletePersonIndex; i <= addressBookSize - 1; i++) {
			personArray[i] = personArray[i + 1];
		}
		cout << "删除成功" << endl;
		addressBookSize--;
	}
	else if (deletePersonIndex >= 0 && deletePersonIndex == addressBookSize - 1) {
		personArray[deletePersonIndex] = { "", "", 0, "", ""};
		cout << "删除成功" << endl;
		addressBookSize--;
	}
	else {
		cout << "未找到该联系人" << endl;
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

	cout << "查询失败" << endl;

	return -1;
}

int selectPersonByName(string name) {
	int ind = isExit(name);
	Person* person = &personArray[ind];
	if (ind > -1) {
		cout << "姓名：" << person->name
			<< "\t性别：" << person->sex
			<< "\t年龄：" << person->age
			<< "\t联系电话：" << person->phone
			<< "\t地址：" << person->address << endl;
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
		cout << "查询失败" << endl;
	}

	system("pause");
	system("cls");
	

}

void clearAllPerson() {
	// 不论是否置空，personArray[1000]在程序结束前内存都不会释放
	// 所以下面这段置空代码写不写无所谓
	/*for (int i = 0; i < addressBookSize; i++) {
		personArray[i] = { "", "", 0, "", "" };
	}*/
	cout << "确认清空所有联系人 Y/N？总计：" << addressBookSize << "人" << endl;
	string flag ="N";
	cin >> flag;

	if (flag == "Y") {
		addressBookSize = 0;
		cout << "清空完成" << endl;
	}

	

	system("pause");
	system("cls");

}
