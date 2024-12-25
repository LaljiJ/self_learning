/*
WAP to overload + operator
*/
#include<iostream>
using namespace std;
class A
{
int x,y;
	
public:
	A()
	{
	}

	A(int a,int b):x(a),y(b)
	{
	}	
	
	void get_data()
	{
	cout << "x- " << x << endl;
	cout << "y- " << y << endl;
	}
	
	friend A operator +(A,A);
};
	A operator +(A ob1,A ob2)
	{
	A result;

	result.x=ob1.x+ob2.x;
	result.y=ob1.y+ob2.y;
	
	return result;
	}

main()
{
A a1(10,20),a2(100,200),a3(1000,2000),a4(1,2),a5;

a5=a1+a2+a3+a4;

a5.get_data();
}
