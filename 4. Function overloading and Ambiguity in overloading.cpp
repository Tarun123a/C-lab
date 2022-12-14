//Q4. Write a program in C++ demonstrating function overloading and ambiguity in overloading 

#include<iostream>
#include<conio.h>
using namespace std;

	void shape(int a)
	{
	int area;
	area=a*a*a;
	cout<<"Area of the cube: "<<area<<endl;	
	}
	void shape(float b,int c)
	{
		int area;
		
		area=b*c;
		cout<<"Area of rectangle : "<<area<<endl;
	}
int main()
{
	shape(10);
	shape(15.5,20);
	getch();
	}	
