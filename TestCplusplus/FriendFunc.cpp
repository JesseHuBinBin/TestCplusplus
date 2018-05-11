
  /********************************************************  
      * @File    : FriendFunc.cpp 
      * @Date    : 2018-5-11-10:55 
      * @Author  : JesseHu
      * @Email   : 354550712@qq.com 
      * @Brief   : 友元函数
      * @Details : 1.类的友元函数是定义在类外部，担忧权访问类所有私有成员(private)和保护成员(protected)。
	               2.尽管友元函数的原型在类的定义中出现过，但是有缘函数并不是成员函数。
				   3.友元函数可以是一个函数，该函数被称为友元函数；友元函数也可以是一个类，改类被称为友元类，
				     这种情况下，整个类及其所有的成员都是友元。
				   4.如果需要声明函数为一个类的友元，需要在类的定义中改函数原型前使用关键字friend，如下所示：
					 class Box
                     {
                       double width;
                     public:
                       double length;
                       friend void printWidth( Box box );
                       void setWidth( double wid );
                     };
				   5.声明类ClassTwo的所有成员函数作为类ClassOne的友元，需要在类ClassOne的定义中放置如下声明：
				     friend class ClassTwo;
				   6.友元函数的使用
				     6.1.因为友元函数没有this指针，则参数要有三种情况：
					     6.1.1.要访问非static成员时，需要对象做参数；
						 6.1.2.要访问static火全局变量时，则不需要对象做参数；
						 6.1.3.如果做参数的对象是全局对象，则不需要对象做参数，可以直接调用友元函数，不需要通过对象或者指针；
				     实例代码：
					 class INTEGER
					 {
					   friend void Print(const INTEGER& obj);//声明友元函数
					 };

					 void Print (const INTEGER& obj)
					 {
					   //函数体
					 }

					 void main()
					 {
					   INTEGER obj;
					   Print(obj);//直接调用
					 }
  *********************************************************/  
#include "FriendFunc.h"
#include <iostream>
using namespace std;

//成员函数的定义
void FriengFunc::setWidth(double wid) 
{
	width = wid;
}

//请注意：printWidth()不是任何类的成员函数
void printWidth(FriengFunc ff)
{
	/*因为printWidth()是FriendFunc的友元函数，他可以直接访问该类的任何成员*/
	cout << "Width of Box : " << ff.width << endl;
}
