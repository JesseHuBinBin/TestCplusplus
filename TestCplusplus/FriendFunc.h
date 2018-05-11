#pragma once
class FriengFunc
{
	double width;
public:
	double length;
	friend void printWidth(FriengFunc ff);
	void setWidth(double wid);
};

