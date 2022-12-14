//Q1. 1d Array MAX

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n;
	float arr[50];
	cout<<"Enter the number of array element: ";
	cin>>n;
	cout<<endl;
	cout<<"Enter the array element: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	cout<<endl<<"Largest element = "<<arr[0];
	getch();
}
