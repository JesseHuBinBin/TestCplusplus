#pragma once

class Box
{
public:
	double length;
	double breadth;
	double height;

	//��Ա����������
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
	double getVolume(void);
	/**��Ա�������������ڲ����壬Ҳ����������ⲿʹ�÷�Χ��������� :: ����ú���*/
	/*double getVolume(void)
	{
	return length*breadth*height;
	}*/
};