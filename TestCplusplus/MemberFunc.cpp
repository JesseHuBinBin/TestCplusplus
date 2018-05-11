/********************************************************************
	created:	2018/04/17
	created:	17:4:2018   11:31
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\LeiChengYuanHanShu.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	类成员函数
	file ext:	cpp
	author:		Jesse
	purpose:	1.C++类成员函数
	note:      （1）类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中的其他变量一样
			   （2）类成员函数是类的一个成员，它可以操作类的任意对象，可以访问对象中的所有成员
*********************************************************************/
#include "MemberFunc.h"

//成员函数的定义
double Box::getVolume(void)
{
	return length*breadth*height;
}

void Box::setLength(double len)
{
	length = len;
}

void Box::setBreadth(double bre)
{
	breadth = bre;
}

void Box::setHeight(double hei)
{
	height = hei;
}

