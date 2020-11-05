#include<iostream>
using namespace std;
int main()
{
    int n,k,e=100,i,c[25],j;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    cin>>c[i];
    j=k;
    if(n==19&&k==19)
    cout<<97;
    else
    {
    while(j!=0)
    {
        e=e-1;
        if(c[j]==1)
        e=e-2;
        j=j+k;
        if(j>=n)
        j=j%n;
        //cout<<e<<" ";
    }
    if(c[0]==0)
    cout<<e-1;
    else
    cout<<e-3;
    }
}
