#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,j,c,f=0,g=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=i;j<n;j++)
        {
            if((a[i]-a[j])<=1)
            f=f+1;
        }
        if(f>g)
        g=f;
    }
    cout<<g;
}
