/********************************************************************
	created:	2018/04/20
	created:	20:4:2018   14:15
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\��Ĺ��캯��.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	��Ĺ��캯��
	file ext:	cpp
	author:		Jesse
	purpose:	3.��Ĺ��캯��
	note:       1.��Ĺ��캯�������һ������ĳ�Ա������������ÿ�δ�������¶���ʱִ�С�
				2.���캯���������������������ȫ��ͬ�ģ����Ҳ��᷵���κ����ͣ�Ҳ���᷵�� void��
				3.���캯��������ΪĳЩ��Ա�������ó�ʼֵ��
				4.ʹ�ó�ʼ���б�����ʼ���ֶ�
				ʹ�ó�ʼ���б�����ʼ���ֶΣ�

				Line::Line( double len): length(len)
				{
				cout << "Object is being created, length = " << len << endl;
				}
				������﷨��ͬ�������﷨��

				Line::Line( double len)
				{
				cout << "Object is being created, length = " << len << endl;
				length = len;
				}
				������һ���� C�����ж���ֶ� X��Y��Z ����Ҫ���г�ʼ����ͬ��أ�������ʹ��������﷨��ֻ��Ҫ�ڲ�ͬ���ֶ�ʹ�ö��Ž��зָ���������ʾ��

				C::C( double a, double b, double c): X(a), Y(b), Z(c)
				{
				....
				}
*********************************************************************/
#include "ConstructionFunc.h"
#include <iostream>
using namespace std;


/************���������Ĺ��캯��*****************/
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

/************�������Ĺ��캯��*****************/
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

