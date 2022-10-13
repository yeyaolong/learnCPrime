#include<iostream>
#include "workerManager.h";
#include "employee.h";
#include "manager.h";
#include "boss.h";
using namespace std;

// 展示系统菜单
void showMenu(WorkerManager &wm) {
	wm.Show_Menu();
	char opt;	// 这里我用char而不是int，因为char占用内存更小
	
	while (true) {
		cout << "请输入选项" << endl;
		cin >> opt;
		switch (opt) {
		case '0':
			// 退出
			wm.Exit();
			break;
		case '1':
			// 添加职工
			wm.Add_Emp();
			break;
		case '2':
			// 显示职工
			break;
		case '3':
			// 删除职工
			break;
		case '4':
			// 修改职工
			break;
		case '5':
			// 查找职工
			break;
		case '6':
			// 对职工排序
			break;
		case '7':
			// 清空文档
			break;
		default:
			// 清屏
			system("cls");
			break;
		}
	}
	
}

int main() {

	

	Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();

	
	Worker* manager = new Manager(2, "李四", 2);
	manager->showInfo();

	Worker* boss = new Boss(3, "王五", 3);
	boss->showInfo();

	/*Boss* boss2 = new Boss(4, "赵六", 4);
	boss2->showInfo();*/
	
	WorkerManager wm;
	showMenu(wm);

	system("pause");

	return 0;
}