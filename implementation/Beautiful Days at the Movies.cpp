#include<iostream>
using namespace std;
long long int rev(long long int i);
long long int max(long long int a,long long int b);
int main()
{
    long long int i,j,k,a,b,f=0;
    cin>>i>>j>>k;
    while(i<=j)
    {
        a=rev(i);
        b=max(i,a);
        if(b%k==0)
        f=f+1;
        i=i+1;
    }
    cout<<f;
}
long long int rev(long long int i)
{
    int r=0,a;
    while(i>0)
    {
        a=i%10;
        r=r*10+a;
        i=i/10;
    }
    return r;
}
long long int max(long long int a,long long int b)
{
    if(a>b)
    return a-b;
    else
    return b-a;
}
