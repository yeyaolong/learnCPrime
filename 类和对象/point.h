#pragma once
#include<iostream>
using namespace std;

// #pragma once
// ��ʾ���ͷ�ļ�ֻ����һ�Σ�����������circle.h��������һ��point.h����main����������һ��point.h
// ��ʱ������ֻ����һ���������,��ֹͷ�ļ��ظ�����

class Point {
private:
	float centerX;
	float centerY;
public:
	float getCenterX();
	void setCenterX(float x);
	float getCenterY();
	void setCenterY(float y);
};