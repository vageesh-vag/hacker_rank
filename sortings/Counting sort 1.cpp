#include<iostream>
using namespace std;
int main()
{
    long long int a[1000000],i,n,b[1000000],j;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<100;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
       b[a[i]]=b[a[i]]+1;
    }
    for(i=0;i<100;i++)
    cout<<b[i]<<" ";
}
