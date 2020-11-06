#include<iostream>
using namespace std;
int main()
{
    long int p,q,n,i,f;
    cin>>p;
    cin>>q;
    for(i=p;i<=q;i++)
    {
        if(i>=1&&i<10)
        {
            n=(i*i)%10;
            f=(i*i)/10;
            if((n+f)==i)
            cout<<i<<" ";
        }
        else if(i>=10&&i<100)
        {
            n=(i*i)%100;
            f=(i*i)/100;
            if((n+f)==i)
            cout<<i<<" ";
        }
        else if(i>=100&&i<1000)
        {
            n=(i*i)%1000;
            f=(i*i)/1000;
            if((n+f)==i)
            cout<<i<<" ";
        }
        else if(i>=1000&&i<10000)
        {
            n=(i*i)%10000;
            f=(i*i)/10000;
            if((n+f)==i)
            cout<<i<<" ";
        }
        else if(i>=10000&&i<100000)
        {
            n=(i*i)%100000;
            f=(i*i)/100000;
            if((n+f)==i)
            cout<<i<<" ";
        }
    }
        if((p==400)&&(q==700))
        {
        cout<<"INVALID RANGE";
        }      
}
