#pragma once
#include<iostream>
#include<string>
#include "worker.h";

using namespace std;

class Employee: public Worker {
public:
	/**
	  * id Ա�����
	  * name Ա������
	  * dId ���ű��
	  **/
	Employee(int id, string name, int dId);

	void showInfo();
	// ��ȡ��λ����
	string getDeptName();
};