#include<stdio.h>
#include<iostream>
#include<Windows.h>

int main() { // main是程序入口
	// 第一步：轰炸消息次数/数量 整数（int）

	int Message_Num = 100;


	// 第二步： 轰炸目标
	FindWindow(NULL, "三斤"); // 从桌面链接QQ窗口 参数要求
	// 第三步 消息内容 复制

	// 第四步 粘贴

	// 第五步 发送

	// 第六步 重复第四第五步过程 执行100次

	while (Message_Num > 0) {
		// 执行轰炸代码100次
		// 粘贴
		// FindWindow(NULL, "三斤老师"); // 这个方法只能获得普通的用户的窗口(并且TIM必须得是独立聊天窗口)，企业用户获取不到
		SendMessage(FindWindow(NULL, "瑶隆"), WM_PASTE, NULL, NULL); // 虚拟键，粘贴
		// 发送
		// 因为我设置的是ctrl + enter发送，所以这里我发不出去消息，而是让消息换行了
		Sleep(1000);
		SendMessage(FindWindow(NULL, "瑶隆"), WM_KEYDOWN, VK_RETURN, NULL); // 虚拟键
		// SendMessage(FindWindow(NULL, "瑶隆"), WM_KEYDOWN, VK_RETURN, NULL); // 虚拟键
		Message_Num--;
	}

	return 0;
}