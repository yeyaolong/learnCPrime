#pragma once
#include<iostream>
using namespace std;

// #pragma once
// 表示这个头文件只引入一次，比如我们在circle.h中引入了一次point.h，在main中又引入了一次point.h
// 此时编译器只会做一次引入操作,防止头文件重复包含

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