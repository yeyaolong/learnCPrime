#include<iostream>
#include<string>
#include "workerManager.h";

using namespace std;

// 实现构造函数
WorkerManager::WorkerManager() {
	cout << "WorkerManager构造函数" << endl;

	// 文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		// 初始化属性
		// 初始化记录人数
		this->m_EmpNum = 0;
		// 初始化数组指针
		this->m_EmpArray = NULL;
		// 初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	else {
		char ch;
		ifs >> ch;
		// 读取文件结尾标志
		// 因为只读取了一个字符，文件当前光标后移一位，所以此时判断是否到了文件尾就能判断文件是否为空
		if (ifs.eof()) {
			cout << "文件为空!" << endl;
			// 初始化属性
			// 初始化记录人数
			this->m_EmpNum = 0;
			// 初始化数组指针
			this->m_EmpArray = NULL;
			// 初始化文件是否为空
			this->m_FileIsEmpty = true;
			ifs.close();
			return;
		}
	}
	// 文件按存在，并且又记录数据
	int num = this->get_EmpNum();
	cout << "职工人数为： " << num << endl;
	this->m_EmpNum = num;

	// 开辟空间
	this->m_EmpArray = new Worker* [this->m_EmpNum];
	// 将文件中数据存放到数组中
	this->init_Emp();
	cout << "姓名：" << this->m_EmpArray[0]->m_Name << endl;
	for (int i = 0; i < this->m_EmpNum; i++) {
		this->m_EmpArray[i]->showInfo();
		
		/*cout << "职工编号：" << this->m_EmpArray[i]->m_Id
			<< "姓名：" << this->m_EmpArray[i]->m_Name
			<< "部门编号：" << this->m_EmpArray[i]->m_DeptId
			<< endl;*/
	}
}

// 展示菜单
void WorkerManager::Show_Menu() {
	cout << "******************************************" << endl;
	cout << "********** 欢迎使用职工管理系统 **********" << endl;
	cout << "************ 0. 退出管理程序 *************" << endl;
	cout << "************ 1. 增加职工信息 *************" << endl;
	cout << "************ 2. 显示职工信息 *************" << endl;
	cout << "************ 3. 删除离职职工 *************" << endl;
	cout << "************ 4. 修改职工信息 *************" << endl;
	cout << "************ 5. 查找职工信息 *************" << endl;
	cout << "************ 6. 按照编号排序 *************" << endl;
	cout << "************ 7. 清空所有文档 *************" << endl;
	cout << "******************************************" << endl;
}

// 退出功能
void WorkerManager::Exit() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}




// 添加职工
void WorkerManager::Add_Emp() {
	cout << "请输入添加职工数量：" << endl;

	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) {
		// 添加
		// 计算添加新空间大小
		int newSize = this->m_EmpNum + addNum; // 新空间人数 = 原来记录人数 + 新增人数

		// 开辟新空间
		Worker** newSpace = new Worker* [newSize];

		// 将原来空间中的数据拷贝到新空间下
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		// 批量添加新数据
		for (int i = 0; i < addNum; i++) {
			int id; // 职工编号
			string name; // 职工姓名
			int dSelect; // 部门选择

			cout << "请输入第 " << i + 1 << " 位职工编号" << endl;
			cin >> id;

			cout << "请输入第 " << i + 1 << " 位职工姓名" << endl;
			cin >> name;
			
			cout << "请选择第 " << i + 1 << " 位职工职位" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			
			// 将创建的职工指针保存到数组中			
			newSpace[this->m_EmpNum + i] = worker;
		}
		
		// 释放原有的空间
		delete[] this->m_EmpArray;
		// 更改新空间指向
		this->m_EmpArray = newSpace;
		// 更新新的职工人数
		this->m_EmpNum = newSize;
		
		// 将数据保存到文件中
		this->save();

		this->m_FileIsEmpty = false;

		cout << "成功添加" << addNum << "名新职工" << endl;
		
	}
	else {
		cout << "输入数据有误" << endl;
	}

	// 按任意键后 清屏回到上级目录
	system("pause");
	system("cls");
}

void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0;i < this->m_EmpNum; i++) {
		string name = this->m_EmpArray[i]->m_Name;
		int id = this->m_EmpArray[i]->m_Id;

		int deptId = this->m_EmpArray[i]->m_DeptId;

		ofs << name << " " << id << " " << deptId << endl;
	}
	ofs.close();
}
// 统计人数
int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;


	int num = 0;
	if (ifs.is_open()) {
		// 视频中老师的写法
		// 读一行的数据，感觉这样一个个把一行的数据读出来好累啊，为啥不直接统计行数呢
		// >> 这种读法，就是读到空格就算语句结束，所以一行要读3次
		// 但是这种写法有个问题就是，如果是运行程序，然后选择 Add_Emp 加入的员工 是不会被计算的
		// 因为我的 WorkerManager::save 方法给的不是空格 而是 '\t'
		/*while (ifs >> name && ifs >> id && ifs >> dId) {
			num++;
		}*/

		//****************** 我自己尝试的 错误写法 开始*******************
		//Worker worker; // 不能用worker去接收，因为 worker是虚拟类
		//Employee emp; // 也不能用Employee和Manager和Boss去接收，因为没有它们默认构造函数
		
		//ifs.getline(*worker, sizeof(Employee))
		//****************** 我自己尝试的 错误写法 结束*******************

		string buf;
		// 这个getline是basic_istream中的getline方法，要与 ifs.getline 区分
		while (getline(ifs, buf)) {
			num++;
		}
	}
	
	ifs.close();

	return num;
	
}
// 初始化员工
void WorkerManager::init_Emp() {


	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	string buf;
	int index = 0;
	while (ifs >> name && ifs >> id && ifs >> dId) {
		Worker* worker = NULL;

		
		if (dId == 1) {
			// 普通职工
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) {
			// 经理
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3) {
			// 老板
			worker = new Boss(id, name, dId);
		}
		
		
		/*cout << "初始化：" << index 
			<< "员工姓名:" << worker->m_Name
			<< "员工id:" << worker->m_Id
			<< endl;*/
		this->m_EmpArray[index] = worker;
		index++;


	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空" << endl;
		return;
	}
	for (int i = 0; i < this->m_EmpNum;i++) {
		// 利用多态调用程序接口
		this->m_EmpArray[i]->showInfo();
	}

	system("pause");
	system("cls");

}


int WorkerManager::IsExit(int id) {
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++) {
		if (this->m_EmpArray[i]->m_Id == id) {
			// 找到职工
			index = i;

			break;
		}
	}

	return index;
}

void WorkerManager::Del_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空" << endl;
	}
	else {
		// 按照职工编号删除
		cout << "请删除想要删除的职工编号：" << endl;
		int id = -1;
		cin >> id;

		int index = this->IsExit(id);

		if (index != -1) {
			// 职工存在
			for (int i = index; i < this->m_EmpNum - 1; i++) {
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			if (this->m_EmpNum == 0) {
				this->m_FileIsEmpty = true;
			}
			// 数据更新到文件中
			this->save();

			cout << "删除成功" << endl;
		}
		else {
			cout << "删除失败，未找到该职工" << endl;
		}
	}
	// 按任意键清屏
	system("pause");
	system("cls");
}

// 实现析构函数
WorkerManager::~WorkerManager() {
	cout << "WorkerManager析构函数" << endl;
	if (this->m_EmpArray != NULL) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}