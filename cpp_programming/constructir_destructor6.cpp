#include<iostream>
using namespace std;
class A
{
int x;
int y;

public:
//	A(); // constructor
	A(int a=1,int b=2); // paramiterize constructor
	void get();
};
/*A::A()
{
cout << "outsid " << endl;
x=10,y=20;
}*/
A::A(int a,int b)
{
cout << "outsize2" << endl;
x=a,y=b;
}
void A::get()
{
cout << x << " " << y << endl;
}

main()
{
class A o1,o2(100,200);
o1.get();
o2.get();
}