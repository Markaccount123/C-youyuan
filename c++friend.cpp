#include<iostream>
using namespace std;




class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{

	}

	////�����cout<<d1 ����d1�Ѿ�������������thisָ��
	//void operator<<(ostream& out)
	//{
	//	out << _year << "-" << _month << "-" << _day << endl;
	//}
	////�����͸��������ˣ���Ϊ��������
	//void operator<<(ostream& out��const Date& d)
	//{
	//	out << _year << "-" << _month << "-" << _day << endl;
	//}
private:
	int _year;
	int _month;
	int _day;
};

//Ϊ�˱��ⲻ���໥֮���λ�ã����ܰ�����дΪ��Ա�����������������ˣ���ô˽�еı�����ô���ܷ��ʵ��أ�
//����������������Ԫ 
//void operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "-" << d._month << "-" << d._day << endl;
//}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "-" << d._month << "-" << d._day << endl;
	return out;
}
int main()
{
	Date d1;
	Date d2(2021,3,7);
	//������ʵ�ǿ����õģ����Ƕ����Զ�����������Ҫ���������
	//cin >> d1;
	//cout << d1;

	//��ᷢ�ּ�ʹ��<<���������أ������ɵ�������
	//d1.operator<<(cout)
	//d1 << cout;  ��д����������ᷢ�ֺ��������ǵߵ��ģ���Ϊһ��Ĭ�ϵĶ�����������ǵ�һ���������Ҳ������ǵڶ������������Ǵ�ʱ
	//���cout��d1������һ��������λ��

	//operator<<(cout,d1)
	//cout << d1;


	//���������ʱ������������,��Ϊ��������cout,�������cout<<d1������һ��void��ֵ������d2���޷����������
	cout << d1 << d2;
	return 0;
}




class Date 
{ 
public:    
	Date(int year, int month, int day) 
		: _year(year)
		, _month(month)
		, _day(day)    
	{}        
	ostream& operator<<(ostream& _cout)   
	{ 
		_cout << d._year << "-" << d._month << "-" << d._day;       
		return _cout; 
	}    
prvate:    
	int _year;    
	int _month;    
	int _day 
};

int main()
{
	Date d(2017, 12, 24);  
	d << cout;  
	return 0;
}



class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, const Date& d);
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{

	}

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "-" << d._month << "-" << d._day << endl;
	return out;
}

istream& operator>>(istream& in, const Date& d)
{
	in >> d._year;
	in >> d._month;
	in >> d._day;
	return in;
}

int main()
{
	Date d1;
	


	cin >> d1;

	cout << d1;


	
	return 0;
}


class Solution {
public:
	class Sum
	{
	public:
		Sum()
		{
			_ret += _i;
			_i++;
		}
	};
	int Sum_Solution(int n) {
		_i = 1;
		_ret = 0;
		Sum arr[n]; //C++��׼����֧�ֵ�
		return _ret;
	}
	static size_t _i;
	static size_t _ret;
};


size_t Solution::_i = 1;
size_t Solution::_ret = 0;