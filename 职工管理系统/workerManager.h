#pragma once	// ��ֹͷ�ļ��ظ�����
#include<iostream>
#include "worker.h";
#include "employee.h";
#include "manager.h";
#include "boss.h";
using namespace std;

class WorkerManager {
public:
	// ���캯��
	WorkerManager();	

	// չʾ�˵�
	void Show_Menu();

	// �˳�����
	void Exit();

	// ��¼�ļ��е���������
	int m_EmpNum;

	// Ա�������ָ��
	Worker** m_EmpArray;

	// ���ְ��
	void Add_Emp();

	// ��������
	~WorkerManager();
};