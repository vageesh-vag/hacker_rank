#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int i,q,j,n,a[32],b[32],k;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>n;
        for(j=0;j<32;j++)
        a[j]=0;
        k=0;
        while(n>0)
        {
            int a1=n%2;
            a[k]=a1;
            k=k+1;
            n=n/2;
        }
        long long int c=0;
        for(j=0;j<32;j++)
        {
            if(a[j]==0)
            c=c+(1*pow(2,j));
        }
        cout<<c<<"\n";
    }
}
