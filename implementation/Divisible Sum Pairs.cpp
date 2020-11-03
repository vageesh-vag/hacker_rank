#include<iostream>
using namespace std;
int main()
{
    int n,k,ar[100],i,j,a,f=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>ar[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            a=ar[i]+ar[j];
            if(a%k==0)
            f=f+1;
        }
    }
    cout<<f;
}
