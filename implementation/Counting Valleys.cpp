#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int n,i,sl1=0,sl2=0,f=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        sl1=sl1+1;
        else if(s[i]=='D')
        sl1=sl1-1;
        if(sl1==0)
        {
            if(sl2<0)
            f=f+1;
        }
        sl2=sl1;
    }
    cout<<f;
}
