#include<iostream>
using namespace std;
class time{
	int h,m,s,sum;
	public:
		void get_data(){
			cout<<"Enter the hours min and sec"<<endl;
			cin>>h>>m>>s;
		
		}
		void add(time t1,time t2);
		void display();
		
};
void time::add(time t1,time t2){
	this ->h=t1.h+t2.h;
	this ->m=t1.m+t2.m;
	this ->s=t1.s+t2.s;
	if(s>60)
	{
		this->s==s%60;
		this->m==m+1;	
	}
	if(m>60)
	{
		this->m==m%60;
		this->h==h+1;	
	}
	
	
}

void time::display(){
	cout<<"Hour:: min:: sec"<<endl;
	cout<<h<<" : "<<m<<" : "<<s<<endl;
	}
	
	int main(){
		time t1,t2,t3;
		t1.get_data();
		t2.get_data();
		t3.add(t1,t2);
		t3.display();
		return 0;
		
	}
