/********************************************************************
	created:	2018/04/20
	created:	20:4:2018   16:54
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\lxghs.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	�����������
	file ext:	cpp
	author:		jesse
	purpose:	�����������
	note:       1.����������������һ������ĳ�Ա������������ÿ��ɾ���������Ķ���ʱִ�С�
                2.���������������������������ȫ��ͬ�ģ�ֻ����ǰ����˸����˺ţ�~����Ϊǰ׺�������᷵���κ�ֵ��Ҳ���ܴ����κβ�����
				3.�����������������������򣨱���ر��ļ����ͷ��ڴ�ȣ�ǰ�ͷ���Դ��
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
