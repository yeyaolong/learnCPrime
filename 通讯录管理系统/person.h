#pragma once
#include<iostream>
#include<string>

using namespace std;

#define ADDRESS_BOOK_MAX 1000


struct Person {
	string name;	// 姓名
	string sex;	// 性别
	int age; // 年龄
	string phone; // 联系电话
	string address; // 家庭住址

};

Person* initPerson(Person* person);

void addPerson();


void showAllPerson();

void deletePersonByName(string name);

int isExit(string name);

int selectPersonByName(string name);

void editPersonByName(string name);

void clearAllPerson();