#include<iostream>
using namespace std;
int main()
{
    long int n,a[10000],f,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    f=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(f>a[i])
        {
        a[i+1]=f;
        for(j=0;j<n;j++)
        cout<<a[j]<<" ";
        cout<<"\n";
        break;
        }
        else
        {
            a[i+1]=a[i];
            for(j=0;j<n;j++)
            cout<<a[j]<<" ";
            cout<<"\n";
        }
    }
    if(f<a[0])
    {
        a[0]=f;
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
    }
}
