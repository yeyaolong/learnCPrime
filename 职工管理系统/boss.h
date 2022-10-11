#pragma once
#include<iostream>
#include "worker.h";

class Boss: public Worker {
public:
	/**
	  * id 员工编号
	  * name 员工名称
	  * dId 部门编号
	  **/
	Boss(int id, string name, int dId);

	void showInfo();
	// 获取岗位名称
	string getDeptName();
};