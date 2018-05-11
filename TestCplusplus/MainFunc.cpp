/********************************************************************
	created:	2018/04/20
	created:	20:4:2018   15:07
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\主函数.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	主函数
	file ext:	cpp
	author:		Jesse
	purpose:	用于调用各个函数方法
	note:       &note&
*********************************************************************/

#include <iostream>
using namespace std;

//头文件的引用
#include "MainFunc.h"
#include "MemberFunc.h"
#include "ConstructionFunc.h"
#include "DestructionFunc.h"
#include "StaticMem.h"
#include "CopyConstructionFunc.h"
//头文件的引用

int main()
{
	MainMethod mainMeThod;

	//mainMeThod.lcyhs();//类成员函数
	//mainMeThod.lgzhs();//类构造函数
	//mainMeThod.DestructionFuc();//类析构函数
	//mainMeThod.MainStaticMember();
	mainMeThod.MainCopyConstructionFunc();
	//system("pause");
	return 0;
}

//************************************
// Method:    MemberFunc
// FullName:  MainMethod::lcyhs
// Access:    public 
// Returns:   void
// Qualifier: 类成员函数
//************************************
void MainMethod::MainMemberFunc()
{
	Box box1;
	Box box2;
	double volume = 0.0;

	box1.setLength(6.0);
	box1.setBreadth(7.0);
	box1.setHeight(5.0);

	box2.setLength(12.0);
	box2.setBreadth(13.0);
	box2.setHeight(10.0);

	volume = box1.getVolume();
	cout << "box1的体积：" << volume << endl;

	volume = box2.getVolume();
	cout << "box2的体积：" << volume << endl;
}

//************************************
// Method:    DestructionFuc
// FullName:  MainMethod::lgzhs
// Access:    public 
// Returns:   void
// Qualifier: 类构造函数
//************************************
void MainMethod::MainConstructionFunc()
{
	Line line;
	line.setLength(6.0);
	cout << "Length of line" << line.getLength() << endl;
	Line2 line2(10.0);
	cout << "Private Lenght = " << line2.getLength2() << endl;
}

//************************************
// Method:    DestructionFuc
// FullName:  MainMethod::lxghs
// Access:    public 
// Returns:   void
// Qualifier: 类析构函数
//************************************
void MainMethod::MainDestructionFuc()
{
	Line3 line3;
	line3.setLength3(13.0);
	cout << "Length of Line3 = " << line3.getLength() << endl;

}

//************************************
// Method:    StaticMember
// FullName:  MainMethod::StaticMember
// Access:    public 
// Returns:   void
// Qualifier: 类的静态成员
//************************************
void MainMethod::MainStaticMember()
{
	//静态成员变量
	//StaticMember staticMember1(3.3, 1.2, 1.5);
	//StaticMember staticMember2(8.5, 6.0, 2.0);
	//cout << "Total object：" << StaticMember::objectCount << endl;

	//静态成员函数
	//cout << "Inital Stage Count: " << StaticMemFunc::GetCount() << endl;
	//StaticMemFunc staticMemFunc1(1.0,2.0,3.0);
	//StaticMemFunc staticMemFunc2(1.0, 2.0, 3.0);
	//cout << "Final Stage Count: " << StaticMemFunc::GetCount() << endl;

	//可以使用静态成员变量清楚了解构造与析构函数的调用情况
	CRect p(10, 20);
	cout << "Hello World" << endl;
}

//************************************
// Method:    MainCopyConstructionFunc
// FullName:  MainMethod::MainCopyConstructionFunc
// Access:    public 
// Returns:   void
// Qualifier: 拷贝构造函数
//************************************
void display(CopyConstruction cc)
{
	cout << "CopyConstruction 大小:" << cc.getLength() << endl;
}
void MainMethod::MainCopyConstructionFunc()
{
	CopyConstruction cc(10);
	CopyConstruction cc1 = cc;
	display(cc);
	display(cc1);
}






