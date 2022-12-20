#include<iostream>
using namespace std;
class circle
{
	int r;
	public:
	void input()
	{
		cout<<"Enter the radius of circle=";
		cin>>r;
	}
	int area()
	{
		cout<<"The area of circle="<<3.14*r*r<<endl;
		return 3.14*r*r;
	}
};
class rectangle
{
	int l,b;
	public:
	void input()
	{
		cout<<"Enter the length of rectangle=";
		cin>>l;
		cout<<"Enter the breadth of rectangle=";
		cin>>b;
	}
	
	int area()
	{
		cout<<"The area of rectangle="<<l*b<<endl;
		return l*b;
	}
	friend void compare(circle ob1, rectangle ob2);
};

void compare(circle ob1, rectangle ob2)
{
	if(ob1.area()>ob2.area())
	cout<<"Circle area is bigger"<<endl;
	else
	cout<<"Rectangle area is bigger"<<endl;
}
int main()
{
	circle ob1;
	rectangle ob2;
	ob1.input(); ob2.input();
	compare(ob1,ob2);
}
