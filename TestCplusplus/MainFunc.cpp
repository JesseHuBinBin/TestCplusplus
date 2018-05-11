/********************************************************************
	created:	2018/04/20
	created:	20:4:2018   15:07
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\������.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	������
	file ext:	cpp
	author:		Jesse
	purpose:	���ڵ��ø�����������
	note:       &note&
*********************************************************************/

#include <iostream>
using namespace std;

//ͷ�ļ�������
#include "MainFunc.h"
#include "MemberFunc.h"
#include "ConstructionFunc.h"
#include "DestructionFunc.h"
#include "StaticMem.h"
#include "CopyConstructionFunc.h"
//ͷ�ļ�������

int main()
{
	MainMethod mainMeThod;

	//mainMeThod.lcyhs();//���Ա����
	//mainMeThod.lgzhs();//�๹�캯��
	//mainMeThod.DestructionFuc();//����������
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
// Qualifier: ���Ա����
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
	cout << "box1�������" << volume << endl;

	volume = box2.getVolume();
	cout << "box2�������" << volume << endl;
}

//************************************
// Method:    DestructionFuc
// FullName:  MainMethod::lgzhs
// Access:    public 
// Returns:   void
// Qualifier: �๹�캯��
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
// Qualifier: ����������
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
// Qualifier: ��ľ�̬��Ա
//************************************
void MainMethod::MainStaticMember()
{
	//��̬��Ա����
	//StaticMember staticMember1(3.3, 1.2, 1.5);
	//StaticMember staticMember2(8.5, 6.0, 2.0);
	//cout << "Total object��" << StaticMember::objectCount << endl;

	//��̬��Ա����
	//cout << "Inital Stage Count: " << StaticMemFunc::GetCount() << endl;
	//StaticMemFunc staticMemFunc1(1.0,2.0,3.0);
	//StaticMemFunc staticMemFunc2(1.0, 2.0, 3.0);
	//cout << "Final Stage Count: " << StaticMemFunc::GetCount() << endl;

	//����ʹ�þ�̬��Ա��������˽⹹�������������ĵ������
	CRect p(10, 20);
	cout << "Hello World" << endl;
}

//************************************
// Method:    MainCopyConstructionFunc
// FullName:  MainMethod::MainCopyConstructionFunc
// Access:    public 
// Returns:   void
// Qualifier: �������캯��
//************************************
void display(CopyConstruction cc)
{
	cout << "CopyConstruction ��С:" << cc.getLength() << endl;
}
void MainMethod::MainCopyConstructionFunc()
{
	CopyConstruction cc(10);
	CopyConstruction cc1 = cc;
	display(cc);
	display(cc1);
}






