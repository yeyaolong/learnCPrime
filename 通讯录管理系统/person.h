#pragma once
#include<iostream>
#include<string>

using namespace std;

#define ADDRESS_BOOK_MAX 1000


struct Person {
	string name;	// ����
	string sex;	// �Ա�
	int age; // ����
	string phone; // ��ϵ�绰
	string address; // ��ͥסַ

};

Person* initPerson(Person* person);

void addPerson();


void showAllPerson();

void deletePersonByName(string name);

int isExit(string name);

int selectPersonByName(string name);

void editPersonByName(string name);

void clearAllPerson();