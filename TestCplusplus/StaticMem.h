#pragma once

class StaticMember
{
public:
	static int objectCount;

	StaticMember(double l, double b, double h);
	double Volume();

private:
	double lenght;//长度
	double breathe;//宽度
	double height;//高度
};


class StaticMemFunc
{
public:
	static int objectCount2;
	StaticMemFunc(double l,double b,double h);
	double volume();
	static int GetCount();
private:
	double length2;
	double breathe2;
	double herght2;
};

class Cpoint 
{
public:
	static int value;
	static int num;
	Cpoint(int x, int y);
	~Cpoint();
	
private:
	int xp, yp;
};

class CRect {
public:
	CRect(int x1, int x2);
	~CRect();
private:
	Cpoint mpt1, mpt2;
};
