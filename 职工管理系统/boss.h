#pragma once
#include<iostream>
#include "worker.h";

class Boss: public Worker {
public:
	/**
	  * id Ա�����
	  * name Ա������
	  * dId ���ű��
	  **/
	Boss(int id, string name, int dId);

	void showInfo();
	// ��ȡ��λ����
	string getDeptName();
};