//Q2.Addition Multiplication of 1d array 

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,arr1[50],arr2[50],add[50];
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the first array element: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
		cout<<"Enter the second array element: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	for(i=0;i<n;i++)
	{
		add[i]=arr1[i]+arr2[i];
		cout<<arr1[i]<<" + "<<arr2[i]<<" = "<<add[i]<<endl;
		
	}
	cout<<"Now the added array is : ";
	for(i=0;i<n;i++)
	{
		cout<<add[i]<<ends;
		
	}
	getch();
}
	
	
