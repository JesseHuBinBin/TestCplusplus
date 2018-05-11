/********************************************************************
	created:	2018/04/20
	created:	20:4:2018   16:54
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\lxghs.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	类的析构函数
	file ext:	cpp
	author:		jesse
	purpose:	类的析构函数
	note:       1.类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
                2.析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。
				3.析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
*********************************************************************/

#include "DestructionFunc.h"
#include <iostream>
using namespace std;

Line3::Line3() 
{
	cout << "Object has been created" << endl;
}
Line3::~Line3()
{
	cout << "Object has been delete" << endl;
}

void Line3::setLength3(double len) 
{
	Lenght3 = len;
}

double Line3::getLength(void)
{
	return Lenght3;
}
