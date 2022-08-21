#include<iostream>
#include<string>
#include"person.h"
using namespace std;

/**
* 系统中需要实现的功能如下：
*	添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多建立1000人
*	显示联系人：显示通讯录中所有联系人信息
*	删除联系人：按照姓名进行删除联系人
*	查找联系人：按照姓名查看指定联系人信息
*	修改联系人：按照姓名重新修改指定联系人
*	清空联系人：清空通讯录中所有信息
*	退出通讯录
*/



void showMenu() {
	cout << "请输入菜单" << endl;
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 7、退出系统   *****" << endl;
	cout << "*************************" << endl;

}

int main() {

	int menuId = 0;
	bool flag = true;

	while (flag) {
		cout << endl;
		showMenu();
		cin >> menuId;

		switch (menuId) {
			case 1:
				// 添加联系人
				addPerson();
				break;
			case 2:
				// 显示联系人
				showAllPerson();
				break;
			case 3:
			{
				// 如果case中有做变量初始化，就要把整个case用大括号括起来
				// 删除联系人
				cout << "请输入联系人姓名：" << endl;
				string name = "";
				cin >> name;
				deletePersonByName(name);
				break;
			}
				
			case 4:
			{
				
				// 查找联系人
				cout << "请输入联系人姓名：" << endl;
				string name = "";
				cin >> name;
				selectPersonByName(name);
				break;
			}
				
			case 5:
			{
				// 修改联系人
				cout << "请输入要修改的联系人姓名：" << endl;
				string name = "";
				cin >> name;
				editPersonByName(name);
				break;
			}
				
			case 6:
				// 清空联系人
				clearAllPerson();
				break;
			case 7:
				// 退出系统
				cout << "系统已退出，感谢您的使用" << endl;
				flag = false;
				break;
			default:
				continue;
		}

	}

	return 0;
}