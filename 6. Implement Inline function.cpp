 //Q6. Write a program to implement inline function

#include<iostream>
#include<conio.h>
using namespace std;
inline int display(int n)
{
	int x=n;
	return x;
}
int main()
{
	cout<<"Number is : "<<display(10)<<endl;
	cout<<"Number is : "<<display(20)<<endl;
	cout<<"Number is : "<<display(50)<<endl;
	cout<<"Number is : "<<display(200)<<endl;
	getch();
}
