/********************************************************************
	created:	2018/04/17
	created:	17:4:2018   11:31
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\LeiChengYuanHanShu.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	���Ա����
	file ext:	cpp
	author:		Jesse
	purpose:	1.C++���Ա����
	note:      ��1����ĳ�Ա������ָ��Щ�Ѷ����ԭ��д���ඨ���ڲ��ĺ����������ඨ���е���������һ��
			   ��2�����Ա���������һ����Ա�������Բ������������󣬿��Է��ʶ����е����г�Ա
*********************************************************************/
#include "MemberFunc.h"

//��Ա�����Ķ���
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

