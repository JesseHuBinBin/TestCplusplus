#pragma once

class CopyConstruction
{
public:
	int getLength(void);
	CopyConstruction(int len);
	CopyConstruction(const CopyConstruction &obj);
	~CopyConstruction();
private:
	int *ptr;
};

