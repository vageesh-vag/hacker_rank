#include<iostream>
using namespace std;
int distance(int a,int b,int c);
int main()
{
    int q,i,x,y,z,a=-1;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        a=distance(x,y,z);
        if(a==0)
        cout<<"Cat B\n";
        else if(a==1)
        cout<<"Cat A\n";
        else
        cout<<"Mouse C\n";
    }
}
int distance(int a,int b,int c)
{
    int n1,n2;
    if(a>c)
        n1=a-c;
    else
        n1=c-a;

    if(b>c)
        n2=b-c;
    else
        n2=c-b;

    if(n1>n2)
    return 0;
    else if(n1<n2)
    return 1;
    else
    return 2;
}
