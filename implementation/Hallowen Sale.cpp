#include<iostream>
using namespace std;
int main()
{
    long long int p,d,m,s,f=0,i=0;
    cin>>p>>d>>m>>s;
    while((p>=m)&&(f<=s))
    {
        i=i+1;
        f=f+p;
        p=p-d;
       
    }
    while(f<=s)
    {
        i=i+1;
       f=f+m;
    }
    cout<<i-1;
}
