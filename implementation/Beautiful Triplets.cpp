#include<iostream>
using namespace std;
int main()
{
    long long int n,d,i,j,k,a[10000],f=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]==d)
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[k]-a[j]==d)
                    f=f+1;
                }
            }
        }
    }
    cout<<f;
}
