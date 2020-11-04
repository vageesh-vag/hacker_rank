#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,m=1,a[60];
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>n;
       a[0]=1;
        for(j=1;j<=n;j++)
        {
            if(j%2==1)
            a[j]=2*a[j-1];
            else
            a[j]=a[j-1]+1;
        }
        cout<<a[n]<<"\n";
    }
}
