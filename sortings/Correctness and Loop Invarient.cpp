#include<iostream>
using namespace std;
int main()
{
    int a[1000],i,n,c,j;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
