#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,f=0,j,b[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=1;i<=100;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        b[a[i]]=b[a[i]]+1;
    }
    j=b[1];
    for(i=1;i<=100;i++)
    {
        if(b[i]>j)
        j=b[i];
    }
    for(i=1;i<=100;i++)
    f=f+b[i];
    cout<<f-j;
}
