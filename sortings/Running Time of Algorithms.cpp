#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],i,j,c,k,f=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            for(j=i;j>0;j--)
            {
                while(a[j]<a[j-1])
                {
                c=a[j];
                a[j]=a[j-1];
                a[j-1]=c;
                f=f+1;
                }
            }
        }
        //for(k=0;k<n;k++)
        //cout<<a[k]<<" ";
        //cout<<"\n";
    }
    cout<<f;
}
