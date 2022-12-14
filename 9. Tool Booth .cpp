#include<iostream>
using namespace std;
class toolbooth{
	static int ccount;
	static int cash;
	int np=0,p;
	public:
		void carpaying();
		void carnp();
		void display();
		
};
int toolbooth::ccount;
int toolbooth::cash;
void toolbooth::carpaying(){
	cash=cash+50;
	ccount++;
	p++;
}
void toolbooth::display(){
	cout<<"Total cars pased= "<<ccount<<endl;
	cout<<"cars passed not paying cash="<<np<<endl;
	cout<<"Total tax="<<cash<<endl;
}
int main(){
	int x;
	char c;
	c=='y';
	toolbooth t;
	do{
		cout<<"1.Paying\n2.Not paying\n3.Display"<<endl;
		cin>>x;
		switch(x)
		{
			case 1:
				t.carpaying();
				cout<<"Car added"<<endl;
				break;
				case 2:
					t.carnp();
					cout<<"Car added"<<endl;
					break;
					case 3:
						t.display();
						c='a';
						break;
						default:
							printf("Enter a valid choice");
							break;
						}
						if(c=='y'||c=='y')
						{
							cout<<"Do you want to continue"<<endl;
							cin>>c;
						}
	}
	while(c=='y'||c=='y');
	return 1;
}
