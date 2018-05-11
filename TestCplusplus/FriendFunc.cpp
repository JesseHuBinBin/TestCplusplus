
  /********************************************************  
      * @File    : FriendFunc.cpp 
      * @Date    : 2018-5-11-10:55 
      * @Author  : JesseHu
      * @Email   : 354550712@qq.com 
      * @Brief   : ��Ԫ����
      * @Details : 1.�����Ԫ�����Ƕ��������ⲿ������Ȩ����������˽�г�Ա(private)�ͱ�����Ա(protected)��
	               2.������Ԫ������ԭ������Ķ����г��ֹ���������Ե���������ǳ�Ա������
				   3.��Ԫ����������һ���������ú�������Ϊ��Ԫ��������Ԫ����Ҳ������һ���࣬���౻��Ϊ��Ԫ�࣬
				     ��������£������༰�����еĳ�Ա������Ԫ��
				   4.�����Ҫ��������Ϊһ�������Ԫ����Ҫ����Ķ����иĺ���ԭ��ǰʹ�ùؼ���friend��������ʾ��
					 class Box
                     {
                       double width;
                     public:
                       double length;
                       friend void printWidth( Box box );
                       void setWidth( double wid );
                     };
				   5.������ClassTwo�����г�Ա������Ϊ��ClassOne����Ԫ����Ҫ����ClassOne�Ķ����з�������������
				     friend class ClassTwo;
				   6.��Ԫ������ʹ��
				     6.1.��Ϊ��Ԫ����û��thisָ�룬�����Ҫ�����������
					     6.1.1.Ҫ���ʷ�static��Աʱ����Ҫ������������
						 6.1.2.Ҫ����static��ȫ�ֱ���ʱ������Ҫ������������
						 6.1.3.����������Ķ�����ȫ�ֶ�������Ҫ����������������ֱ�ӵ�����Ԫ����������Ҫͨ���������ָ�룻
				     ʵ�����룺
					 class INTEGER
					 {
					   friend void Print(const INTEGER& obj);//������Ԫ����
					 };

					 void Print (const INTEGER& obj)
					 {
					   //������
					 }

					 void main()
					 {
					   INTEGER obj;
					   Print(obj);//ֱ�ӵ���
					 }
  *********************************************************/  
#include "FriendFunc.h"
#include <iostream>
using namespace std;

//��Ա�����Ķ���
void FriengFunc::setWidth(double wid) 
{
	width = wid;
}

//��ע�⣺printWidth()�����κ���ĳ�Ա����
void printWidth(FriengFunc ff)
{
	/*��ΪprintWidth()��FriendFunc����Ԫ������������ֱ�ӷ��ʸ�����κγ�Ա*/
	cout << "Width of Box : " << ff.width << endl;
}
