#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if((n%5==0)&&(n%3==0))
        {
            for(j=0;j<n;j++)
            cout<<5;
            cout<<"\n";
        }
        else if(n%3==0)
        {
            for(j=0;j<n;j++)
            cout<<5;
            cout<<"\n";
        }
        else if(n%5==0)
        {
            int a=0;
            while(((n-a)%3!=0)&&a<=n)
            a=a+5;
            for(j=0;j<n-a;j++)
            cout<<5;
            for(j=0;j<a;j++)
            cout<<3;
            cout<<"\n";

        }
        else
        {
            int a=0;
            while(((n-a)%3!=0)&&a<=n)
            a=a+5;
            if(a>=n)
            cout<<-1<<"\n";
            else
            {
                for(j=0;j<n-a;j++)
                cout<<5;
                for(j=0;j<a;j++)
                cout<<3;
                cout<<"\n";
            }
        }
    }
}
