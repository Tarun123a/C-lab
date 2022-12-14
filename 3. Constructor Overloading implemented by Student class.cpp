//Q3. Create a student class and implement constructor overloading

#include<iostream>
#include<conio.h>


using namespace std;

	class student
	{
		char name[100],dept[100];
		int age,rool,year,sem;
		float marks,cgpa,sgpa;
		public:
			void input();
			void output();	
	};
	
	void student::input()
	{
		cout<<"Enter the student name : ";
		cin>>name;
		cout<<"Enter the name of the department : ";
		cin>>dept;
		cout<<"Enter the student age : ";
		cin>>age;
		cout<<"Enter the student roll number : ";
		cin>>rool;
		cout<<"Enter the student addmition year : ";
		cin>>year;
		cout<<"Enter the present semister : ";
		cin>>sem;
		cout<<"Enter the marks  : ";
		cin>>marks;
		cout<<"Enter the cgpa : ";
		cin>>cgpa;
		cout<<"Enter the sgpa : ";
		cin>>sgpa;
		
	}
	void student::output()
	{
		cout<<" "<<endl<<endl<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Department :"<<dept<<endl;
		cout<<"Age :"<<age<<endl;
		cout<<"Roll :"<<rool<<endl;
		cout<<"Admission Year :"<<year<<endl;
		cout<<"Present Semester :"<<sem<<endl;
		cout<<"Marks :"<<marks<<endl;
		cout<<"CGPA :"<<cgpa<<endl;
		cout<<"SGPA :"<<sgpa<<endl;
	}

int main()
{
	student obj;
	obj.input();
	obj.output();
	getch();
	}	
	

