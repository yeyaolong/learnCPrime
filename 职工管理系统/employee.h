#pragma once
#include<iostream>
#include<string>
#include "worker.h";

using namespace std;

class Employee: public Worker {
public:
	/**
	  * id 员工编号
	  * name 员工名称
	  * dId 部门编号
	  **/
	Employee(int id, string name, int dId);

	void showInfo();
	// 获取岗位名称
	string getDeptName();
};