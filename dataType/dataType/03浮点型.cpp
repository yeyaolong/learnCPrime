#include<iostream>
#include<iomanip>
using namespace std;

int main3() {

	cout << "��������ռ���ڴ�:" << sizeof(float) << endl;	// 4
	cout << "˫���ȱ���ռ���ڴ�:" << sizeof(double) << endl;	// 8
	
	// Ĭ�ϲ����κδ���Ļ���Ĭ����ֻ��ʾ 6λС��
	// #include<iomanip> ����ʹ�� setprecision(��Чλ��) ������Ч����λ��
	// ����۲첻ͬ�����µ�������ʧ

	float num1 = 3.14159265359; // 3.14159265359�ᱻ��Ϊ��double���ͣ��൱�� һ��double���ݣ���ֵ��һ��float��������ɾ��ȶ�ʧ
	cout << "num1��ֵ" << setprecision(11) << num1 << " num1����ռ���ڴ�:" << sizeof(num1) << endl;	// num1��Ȼ��float���ͣ�����4���ֽ�

	float num2 = 3.14159265359f; // 10.0f�ᱻ��Ϊ��һ��float���͵����ݸ�ֵ��һ��float���͵ı���num2
	cout << "num2��ֵ" << setprecision(11) << num2 << " num2����ռ���ڴ�:" << sizeof(num2) << endl;	// 4
	
	// float num3 = 10f; // ����д��ֱ�ӱ���

	double num4 = 3.14159265359; // ����д���ᱻ��Ϊ��double���͵����ݱ���ֵ��double���ͱ���num4
	cout << "num4��ֵ" << setprecision(11) << num4 << " num4����ռ���ڴ�:" << sizeof(num4) << endl;	// 8
	 // ����д���ᱻ��Ϊ��float�������ݸ��Ƹ�double���ͱ���num5,��������ռ4���ֽڣ��ŵ�8���ֽڵ��ڴ��в�����ɾ��ȶ�ʧ.
	// ����, 3.14159265359f ����д�����Ȱ�3.14159265359����ɵ�����ֵ
	// Ҳ����˵������������ʧһ���־��Ⱥ��ٸ�ֵ��˫������num5
	double num5 = 3.14159265359f;
	cout << "num5��ֵ" << setprecision(11) << num5 << " num5����ռ���ڴ�:" << sizeof(num5) << endl;	// 8

	// ��ѧ������
	float num6 = 3e2; // 3 ���� 10 �� 2 �η�
	cout << "num6��ֵ:" << num6 << endl;

	float num7 = 3e-2; // 3 ���� 0.1 �� 2 �η�

	cout << "num7��ֵ" << num7 << endl;
	

	


	system("pause");

	return 0;
}