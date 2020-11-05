#include<iostream>
using namespace std;
int main()
{
    long long int n,k,q,i,a[100000],b[100000],m,f;
    cin>>n>>k>>q;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        f=i+k;
        if(f>=n)
        f=f%n;
        b[f]=a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>m;
        cout<<b[m]<<"\n";
    }
}
