#include<iostream>
using namespace std;
int main()
{
    int n,a[100],b[100],i,f=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<100;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        b[a[i]-1]=b[a[i]-1]+1;
    }
    for(i=0;i<100;i++)
    b[i]=b[i]/2;
    for(i=0;i<100;i++)
    f=f+b[i];
    cout<<f;
}
