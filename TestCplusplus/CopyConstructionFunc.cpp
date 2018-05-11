/********************************************************************
	created:	2018/04/26
	created:	26:4:2018   10:01
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\CopyConstructionFunc.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	CopyConstructionFunc
	file ext:	cpp
	author:		Jesse
	purpose:
	note:       1.拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。
	            2.拷贝构造函数通常用于：
                  2.1.通过使用另一个同类型的对象来初始化新创建的对象。
                  2.2.复制对象把它作为参数传递给函数。
                  2.3.复制对象，并从函数返回这个对象。
                3.如果在类中没有定义拷贝构造函数，编译器会自行定义一个。
				  如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数 
				4.拷贝构造函数的最常见形式如下：
				  classname (const classname &obj) 
				  {
                    // 构造函数的主体
                  }
				  //在这里，obj 是一个对象引用，该对象是用于初始化另一个对象的。
                5.什么情况使用构造函数
				  5.1.一个对象以值传递的方式传入函数体
				  5.2.一个对象以值传递的方式从函数返回
				  5.3.一个对象需要通过另外一个对象进行初始化
*********************************************************************/

#include "CopyConstructionFunc.h"
#include <iostream>
using namespace std;

CopyConstruction::CopyConstruction(int len)
{
	cout << "调用构造函数" << endl;
	//为指针分配内存
	ptr = new int;
	*ptr = len;
}

CopyConstruction::CopyConstruction(const CopyConstruction &obj)
{
	cout << "调用拷贝构造函数并为指针ptr分配内存" << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

CopyConstruction::~CopyConstruction(void)
{
	cout << "释放内存" << endl;
	delete ptr;
}

int CopyConstruction::getLength()
{
	return *ptr;
}




