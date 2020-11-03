#include<iostream>
using namespace std;
int main()
{
   long long int s,t,a,b,m,n,x[100000],y[100000],i,f=0,g=0;
   cin>>s>>t;
   cin>>a>>b;
   cin>>m>>n;
   for(i=0;i<m;i++)
   cin>>x[i];
   for(i=0;i<n;i++)
   cin>>y[i];
   for(i=0;i<m;i++)
   {
       if(x[i]+a>=s&&x[i]+a<=t)
       f=f+1;
   }
   for(i=0;i<n;i++)
   {
       if(y[i]+b>=s&&y[i]+b<=t)
       g=g+1;
   }
   cout<<f<<"\n";
   cout<<g;

}
