//Q5. Write a program in C++ using call by reference to swap 2 values 

#include<iostream>
#include<conio.h>
using namespace std;
void swap(int&x,int&y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
int m,n;
cout<<"Enter the first number(M): ";
cin>>m;	
cout<<"Enter the secound number(N):";
cin>>n;
swap(m,n);
cout<<"M = "<<m<<endl;
cout<<"N = "<<n;
getch();
}
	

