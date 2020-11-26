#include<iostream>
using namespace std;
int main()
{
    int v,n,a[1000],i,f=0;
    cin>>v;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(v==a[i])
        f=i;
    }
    cout<<f;
}
