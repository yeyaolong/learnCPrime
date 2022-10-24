#pragma once	// ��ֹͷ�ļ��ظ�����
#include<iostream>
#include "worker.h";
#include "employee.h";
#include "manager.h";
#include "boss.h";
#include <string>;
#include <fstream>;

#define FILENAME "empFile.txt"

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

	// �����ļ�
	void save();

	// �ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	// ͳ������
	int get_EmpNum();

	// ��ʼ��Ա��
	void init_Emp();

	// ��ʾְ��
	void Show_Emp();

	// �ж�ְ���Ƿ����,������ڣ����������±꣬�������򷵻�-1
	int IsExit(int id);

	// ɾ��ְ��
	void Del_Emp();

	// ��������
	~WorkerManager();
};