#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,s,i,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        if(n>m)
        {
        y=m+s-1;
        if(y>n)
        cout<<y-n<<"\n";
        else if(y==0)
        cout<<n<<"\n";
        else
        cout<<y<<"\n";
        }
        else
        {
        y=(m%n)+s-1;
        if(y>n)
        cout<<y-n<<"\n";
        else if(y==0)
        cout<<n<<"\n";
        else
        cout<<y<<"\n";
        }
    }
}
