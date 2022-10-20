#pragma once	// 防止头文件重复包含
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

	

	// 构造函数
	WorkerManager();

	// 展示菜单
	void Show_Menu();

	// 退出程序
	void Exit();

	// 记录文件中的人数个数
	int m_EmpNum;

	// 员工数组的指针
	Worker** m_EmpArray;

	// 添加职工
	void Add_Emp();

	// 保存文件
	void save();

	// 判断文件是否为空
	bool m_FileIsEmpty;



	// 析构函数
	~WorkerManager();
};