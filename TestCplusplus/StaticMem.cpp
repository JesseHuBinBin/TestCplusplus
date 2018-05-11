/********************************************************************
	created:	2018/04/23
	created:	23:4:2018   14:18
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\StaticMem.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	StaticMem
	file ext:	cpp
	author:		Jesse
	purpose:    4.类的静态成员
	note:       1.我们可以使用 static 关键字来把类成员定义为静态的。当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。
				2.静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
				3.我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化。
				4.静态成员变量在类中仅仅是声明，没有定义，所以要在类的外面定义，实际上是给静态成员变量分配内存。
				  如果不加定义就会报错，初始化是赋一个初始值，而定义是分配内存。
				5.// 初始化类 Box 的静态成员   其实是定义并初始化的过程
				  // int Box::objectCount = 0;
				  // 也可这样 定义却不初始化
				  // int Box::objectCount;
*********************************************************************/
#include "StaticMem.h"
#include <iostream>
using namespace std;

//////////////////////////////类静态成员
StaticMember::StaticMember(double l, double b, double h)
{
	cout << "Constructor called." << endl;
	lenght = l;
	breathe = b;
	height = h;
	//每次将对象时增加1
	objectCount++;
}

int StaticMember::objectCount = 0;

double StaticMember::Volume()
{
	return lenght*breathe*height;
}

///////////////////////////////静态成员函数
StaticMemFunc::StaticMemFunc(double l, double b, double h)
{
	cout << "静态成员函数被调用" << endl;
	length2 = l;
	breathe2 = b;
	herght2 = h;

	objectCount2++;
}

int StaticMemFunc::objectCount2;

double StaticMemFunc::volume()
{
	return length2*breathe2*herght2;
}

int StaticMemFunc::GetCount()
{
	return objectCount2;
}

/////////////////////可以使用静态成员变量清楚了解构造与析构函数的调用情况。
int Cpoint::value = 0;
int Cpoint::num = 0;
Cpoint::Cpoint(int x, int y) :xp(x), yp(y)
{
	value++;
	cout << "调用构造函数:" << value << endl;
}

Cpoint::~Cpoint()
{
	num++;
	cout << "调用析构函数:" << num << endl;
}

CRect::CRect(int x1, int x2) :mpt1(x1, x2), mpt2(x1, x2)
{
	cout << "调用构造\n";
}

CRect::~CRect()
{
	cout << "调用析构\n";
}
