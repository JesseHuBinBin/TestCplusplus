/********************************************************************
	created:	2018/04/26
	created:	26:4:2018   10:01
	filename: 	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus\CopyConstructionFunc.cpp
	file path:	E:\Jesse\Workspace\UE4\Project\Test\TestCplusplus\TestCplusplus
	file base:	CopyConstructionFunc
	file ext:	cpp
	author:		Jesse
	purpose:
	note:       1.�������캯����һ������Ĺ��캯�������ڴ�������ʱ����ʹ��ͬһ����֮ǰ�����Ķ�������ʼ���´����Ķ���
	            2.�������캯��ͨ�����ڣ�
                  2.1.ͨ��ʹ����һ��ͬ���͵Ķ�������ʼ���´����Ķ���
                  2.2.���ƶ��������Ϊ�������ݸ�������
                  2.3.���ƶ��󣬲��Ӻ��������������
                3.���������û�ж��忽�����캯���������������ж���һ����
				  ��������ָ����������ж�̬�ڴ���䣬����������һ���������캯�� 
				4.�������캯���������ʽ���£�
				  classname (const classname &obj) 
				  {
                    // ���캯��������
                  }
				  //�����obj ��һ���������ã��ö��������ڳ�ʼ����һ������ġ�
                5.ʲô���ʹ�ù��캯��
				  5.1.һ��������ֵ���ݵķ�ʽ���뺯����
				  5.2.һ��������ֵ���ݵķ�ʽ�Ӻ�������
				  5.3.һ��������Ҫͨ������һ��������г�ʼ��
*********************************************************************/

#include "CopyConstructionFunc.h"
#include <iostream>
using namespace std;

CopyConstruction::CopyConstruction(int len)
{
	cout << "���ù��캯��" << endl;
	//Ϊָ������ڴ�
	ptr = new int;
	*ptr = len;
}

CopyConstruction::CopyConstruction(const CopyConstruction &obj)
{
	cout << "���ÿ������캯����Ϊָ��ptr�����ڴ�" << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

CopyConstruction::~CopyConstruction(void)
{
	cout << "�ͷ��ڴ�" << endl;
	delete ptr;
}

int CopyConstruction::getLength()
{
	return *ptr;
}




