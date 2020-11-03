#include<iostream>
using namespace std;
int main()
{
    long long int n,a[200000],i,b[5]={0,0,0,0,0},max;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    b[a[i]-1]=b[a[i]-1]+1;
    max=b[0];
    for(i=0;i<5;i++)
    {
        if(b[i]>max)
        max=b[i];
    }
    for(i=0;i<5;i++)
    {
        if(b[i]==max)
        {
            cout<<i+1;
            break;
        }
    }
}
