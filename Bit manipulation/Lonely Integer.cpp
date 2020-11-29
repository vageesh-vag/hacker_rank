#include<iostream>
using namespace std;
int main()
{
    int n,a[101],i,b[101];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<101;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    b[a[i]]=b[a[i]]+1;
    for(i=0;i<101;i++)
    {
        if(b[i]==1)
        cout<<i;
    }
}
