/********************************************************************
	created:	2018/04/20
	created:	20:4:2018   14:15
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\类的构造函数.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	类的构造函数
	file ext:	cpp
	author:		Jesse
	purpose:	3.类的构造函数
	note:       1.类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
				2.构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。
				3.构造函数可用于为某些成员变量设置初始值。
				4.使用初始化列表来初始化字段
				使用初始化列表来初始化字段：

				Line::Line( double len): length(len)
				{
				cout << "Object is being created, length = " << len << endl;
				}
				上面的语法等同于如下语法：

				Line::Line( double len)
				{
				cout << "Object is being created, length = " << len << endl;
				length = len;
				}
				假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化，同理地，您可以使用上面的语法，只需要在不同的字段使用逗号进行分隔，如下所示：

				C::C( double a, double b, double c): X(a), Y(b), Z(c)
				{
				....
				}
*********************************************************************/
#include "ConstructionFunc.h"
#include <iostream>
using namespace std;


/************不带参数的构造函数*****************/
Line::Line()
{
	cout << "Object has been created" << endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}

/************带参数的构造函数*****************/
Line2::Line2(double len)
{
	cout << "Object has been created,length =" << len << endl;
	length2 = len;
}

void Line2::setLength2(double len)
{
	length2 = len;
}

double Line2::getLength2(void)
{
	return length2;
}

