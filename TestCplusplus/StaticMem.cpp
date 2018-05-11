/********************************************************************
	created:	2018/04/23
	created:	23:4:2018   14:18
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\StaticMem.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	StaticMem
	file ext:	cpp
	author:		Jesse
	purpose:    4.��ľ�̬��Ա
	note:       1.���ǿ���ʹ�� static �ؼ����������Ա����Ϊ��̬�ġ�������������ĳ�ԱΪ��̬ʱ������ζ�����۴������ٸ���Ķ��󣬾�̬��Ա��ֻ��һ��������
				2.��̬��Ա��������ж������ǹ���ġ���������������ĳ�ʼ����䣬�ڴ�����һ������ʱ�����еľ�̬���ݶ��ᱻ��ʼ��Ϊ�㡣
				3.���ǲ��ܰѾ�̬��Ա�ĳ�ʼ����������Ķ����У����ǿ���������ⲿͨ��ʹ�÷�Χ��������� :: ������������̬�����Ӷ��������г�ʼ����
				4.��̬��Ա���������н�����������û�ж��壬����Ҫ��������涨�壬ʵ�����Ǹ���̬��Ա���������ڴ档
				  ������Ӷ���ͻᱨ����ʼ���Ǹ�һ����ʼֵ���������Ƿ����ڴ档
				5.// ��ʼ���� Box �ľ�̬��Ա   ��ʵ�Ƕ��岢��ʼ���Ĺ���
				  // int Box::objectCount = 0;
				  // Ҳ������ ����ȴ����ʼ��
				  // int Box::objectCount;
*********************************************************************/
#include "StaticMem.h"
#include <iostream>
using namespace std;

//////////////////////////////�ྲ̬��Ա
StaticMember::StaticMember(double l, double b, double h)
{
	cout << "Constructor called." << endl;
	lenght = l;
	breathe = b;
	height = h;
	//ÿ�ν�����ʱ����1
	objectCount++;
}

int StaticMember::objectCount = 0;

double StaticMember::Volume()
{
	return lenght*breathe*height;
}

///////////////////////////////��̬��Ա����
StaticMemFunc::StaticMemFunc(double l, double b, double h)
{
	cout << "��̬��Ա����������" << endl;
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

/////////////////////����ʹ�þ�̬��Ա��������˽⹹�������������ĵ��������
int Cpoint::value = 0;
int Cpoint::num = 0;
Cpoint::Cpoint(int x, int y) :xp(x), yp(y)
{
	value++;
	cout << "���ù��캯��:" << value << endl;
}

Cpoint::~Cpoint()
{
	num++;
	cout << "������������:" << num << endl;
}

CRect::CRect(int x1, int x2) :mpt1(x1, x2), mpt2(x1, x2)
{
	cout << "���ù���\n";
}

CRect::~CRect()
{
	cout << "��������\n";
}
