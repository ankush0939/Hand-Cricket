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
            int runu,runc;
			cout<<"You choose to bat first\n";
			runu=bat();
            cout<<"You Scored "<<runu<<" runs. All the best defending your score. Now the Pc bats\n";
            runc=ball();
            cout<<"You Scored "<<runu<<" and the Pc scored "<<runc<<endl;
            if(runu==runc)
            {
                cout<<"Its a draw!! Better luck next time.\n";
            }
            else if(runu>runc)
            {
                cout<<"Hurray!!!!! You Won.\n";
            }
            else if (runu<runc)
            {
                cout<<"Alas!!!  Better luck next time.\n";
            }
		}
		else if (ch==2)
		{
            int runu,runc;
			cout<<"You choose to ball first\n";
            runc=ball();
            cout<<"You have to chase "<<runc<<" runs. Score "<<runc+1<<" to win.";           
			runu=bat();
            cout<<"You Scored "<<runu<<" and the Pc scored "<<runc<<endl;
            if(runu==runc)
            {
                cout<<"Its a draw!! Better luck next time.";
            }
            else if(runu>runc)
            {
                cout<<"Hurray!!!!! You Won.";
            }
            else if (runu<runc)
            {
                cout<<"Alas!!!  Better luck next time.";
            }
		}
	}
	else
	{
		cout<<"You lost the toss\n";
		int kk=((rand()%2)+1);
		if (kk==1)
		{
            int runu,runc;
			cout<<"Pc choose to bat\n";
			runc=ball();
            cout<<"You have to chase "<<runc<<" runs. Score "<<runc+1<<" to win.";           
			runu=bat();
            cout<<"You Scored "<<runu<<" and the Pc scored "<<runc<<endl;
            if(runu==runc)
            {
                cout<<"Its a draw!! Better luck next time.";
            }
            else if(runu>runc)
            {
                cout<<"Hurray!!!!! You Won.";
            }
            else if (runu<runc)
            {
                cout<<"Alas!!!  Better luck next time.";
            }
		}
		else if (kk==2)
		{
            int runu,runc;
			cout<<"Pc choose to ball\n";
			runu=bat();
            cout<<"You Scored "<<runu<<" runs. All the best defending your score. Now the Pc bats\n";
            runc=ball();
            cout<<"You Scored "<<runu<<" and the Pc scored "<<runc<<endl;
            if(runu==runc)
            {
                cout<<"Its a draw!! Better luck next time.\n";
            }
            else if(runu>runc)
            {
                cout<<"Hurray!!!!! You Won.\n";
            }
            else if (runu<runc)
            {
                cout<<"Alas!!!  Better luck next time.\n";
            }
		}
	}
    return 0;
}

int bat()
{
    int out=0,runs=0;
    while(out==0)
    {
        int cho,ccho=(rand()%7);
        cout<<"score: "<<runs<<" Enter your choice: form 0 to 6\n";
        cin>>cho;
        cout<<"Computer choose: "<<ccho<<endl;     
        if(cho==ccho)
        {
            cout<<"You are Out\n";
            out++;
        }
        else
        {
            runs+=cho;
        }
    }
    return runs;
}

int ball()
{
    int out=0,runs=0;
    while(out==0)
    {
        int cho,ccho=(rand()%7);
        cout<<"score: "<<runs<<" Enter your choice: form 0 to 6\n";
        cin>>cho;
        cout<<"Computer choose: "<<ccho<<endl;
        if(cho==ccho)
        {
            cout<<"Thats Out\n";
            out++;
        }
        else
        {
            runs+=cho;
        }
    }
    return runs;   
}