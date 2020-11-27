#include<iostream>
using namespace std;
int main()
{
   long long int m,n,t,a[10000],i,j,k;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>m;
       cin>>n;
       for(j=0;j<n;j++)
       cin>>a[j];
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((a[j]+a[k]==m)&&(j!=k))
                {
                  if(j<k)
                  cout<<j+1<<" "<<k+1<<"\n";
                }
            }
        }
   }
}
