#pragma once

class Box
{
public:
	double length;
	double breadth;
	double height;

	//成员函数的声明
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
	double getVolume(void);
	/**成员函数可以在类内部定义，也可以在类的外部使用范围解析运算符 :: 定义该函数*/
	/*double getVolume(void)
	{
	return length*breadth*height;
	}*/
};