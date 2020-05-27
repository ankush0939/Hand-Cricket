#include<iostream>
#include<cstdlib>

using namespace std;

int bat();

int ball();

int main()
{
	int t,cc,ch,r1,r2;
	cout<<"Enter your choice:\n 1: For Heads \n 2: For Tails\n";
	cin>>t;
	cc=((rand()%2)+1);
	if (cc==t)
	{
		cout<<"You won the toss \n Press 1 to bat \n Press 2 to ball\n";
		cin>>ch;
		if (ch==1)
		{
			cout<<"You choose to bat first\n";
			bat();
		}
		else if (ch==2)
		{
			cout<<"You choose to ball first\n";
			ball();
		}
	}
	else
	{
		cout<<"You lost the toss";
		int kk=((rand()%2)+1);
		if (kk==1)
		{
			cout<<"Pc choose to bat\n";
			ball();
		}
		else if (kk==2)
		{
			cout<<"Pc choose to ball\n";
			bat();
		}
	}
}