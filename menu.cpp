#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int choice,a,b;
	cout<<"1. Add\n2. Exit\nEnter your choice:\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			cout<<"Enter two numbers:\n";
			cin>>a>>b;
			int res=add(a,b);
			cout<<"\n result=  "<<res;
			break;
		}
		case 2:{exit(0);break;}
		default:cout<<"wrong choice";
	}
	return 0;
}