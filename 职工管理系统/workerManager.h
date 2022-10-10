#pragma once	// 防止头文件重复包含
#include<iostream>
using namespace std;

class WorkerManager {
public:
	// 构造函数
	WorkerManager();

	// 展示菜单
	void Show_Menu();

	// 退出程序
	void Exit();

	// 析构函数
	~WorkerManager();
};