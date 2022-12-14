//Q7. Write a program to implement friend function

#include<iostream>
#include<conio.h>
using namespace std;
	class B;
	class A{
		int x;
		public: 
		A(int p)
		{
			x=p;
			
		}
		friend void compara(A&,B&);
		
	};
	
	class B{
		int y;
		public:
			B(int q)
			{
				y=q;
			}
			friend void compara(A&,B&);
	};
	 void compara(A&a,B&b)
	{
	if(a.x>b.y)
	cout<<a.x;
	else
	cout<<b.y;	
	}
	
int main()
{
	A obj1(40);
	B obj2(20);
	compara(obj1,obj2);
	getch();
	}	
