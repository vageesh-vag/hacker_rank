#include<iostream>
using namespace std;
int main()
{
    int t,n,k,a[1000],i,j,f;
    cin>>t;
    for(i=0;i<t;i++)
    {
        f=0;
        cin>>n>>k;
        for(j=0;j<n;j++)
        cin>>a[j];
        for(j=0;j<n;j++)
        {
            if(a[j]<=0)
            f=f+1;
        }
        if(f>=k)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
}
