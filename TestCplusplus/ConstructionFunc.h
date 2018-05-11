#pragma once

class Line
{
public:
	void setLength(double len);
	double getLength(void);
	Line();  // 这是构造函数

private:
	double length;
};

class Line2
{
public:
	Line2(double len);
	void setLength2(double len);
	double getLength2(void);
private:
	double length2;
};