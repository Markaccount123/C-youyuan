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

	////这里的cout<<d1 其中d1已经传给了隐含的this指针
	//void operator<<(ostream& out)
	//{
	//	out << _year << "-" << _month << "-" << _day << endl;
	//}
	////这样就更过不了了，因为参数多了
	//void operator<<(ostream& out，const Date& d)
	//{
	//	out << _year << "-" << _month << "-" << _day << endl;
	//}
private:
	int _year;
	int _month;
	int _day;
};

//为了避免不抢相互之间的位置，不能把他们写为成员函数，但是问题来了？那么私有的变量怎么才能访问到呢？
//所以这里引入了友元 
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
	//这里其实是可以用的，但是对于自定义类型他需要运算符重载
	//cin >> d1;
	//cout << d1;

	//你会发现即使给<<进行了重载，你依旧调不动它
	//d1.operator<<(cout)
	//d1 << cout;  得写成这样，你会发现和正常的是颠倒的，因为一般默认的都是左操作数是第一个参数，右操作数是第二个参数，但是此时
	//你的cout和d1在抢第一个参数的位置

	//operator<<(cout,d1)
	//cout << d1;


	//连续输出的时候又有问题了,因为你的输出是cout,但是你的cout<<d1返回了一个void的值，所以d2就无法继续输出了
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
		Sum arr[n]; //C++标准下所支持的
		return _ret;
	}
	static size_t _i;
	static size_t _ret;
};


size_t Solution::_i = 1;
size_t Solution::_ret = 0;