#include<stdio.h>
#include<iostream>
#include<Windows.h>

int main() { // main�ǳ������
	// ��һ������ը��Ϣ����/���� ������int��

	int Message_Num = 100;


	// �ڶ����� ��ըĿ��
	FindWindow(NULL, "����"); // ����������QQ���� ����Ҫ��
	// ������ ��Ϣ���� ����

	// ���Ĳ� ճ��

	// ���岽 ����

	// ������ �ظ����ĵ��岽���� ִ��100��

	while (Message_Num > 0) {
		// ִ�к�ը����100��
		// ճ��
		// FindWindow(NULL, "������ʦ"); // �������ֻ�ܻ����ͨ���û��Ĵ���(����TIM������Ƕ������촰��)����ҵ�û���ȡ����
		SendMessage(FindWindow(NULL, "��¡"), WM_PASTE, NULL, NULL); // �������ճ��
		// ����
		// ��Ϊ�����õ���ctrl + enter���ͣ����������ҷ�����ȥ��Ϣ����������Ϣ������
		Sleep(1000);
		SendMessage(FindWindow(NULL, "��¡"), WM_KEYDOWN, VK_RETURN, NULL); // �����
		// SendMessage(FindWindow(NULL, "��¡"), WM_KEYDOWN, VK_RETURN, NULL); // �����
		Message_Num--;
	}

	return 0;
}