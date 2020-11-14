#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int i,f[26],n[26],x,y,j,g=0,h=0;
    string a,b,s="abcdefghijklmnopqrstuvwxyz";
    cin>>a;
    cin>>b;
    for(i=0;i<26;i++)
    {
        f[i]=0;
        n[i]=0;
    }
    for(i=0;i<a.length();i++)
    {
        for(j=0;j<26;j++)
        {
            if(a[i]==s[j])
            f[j]=f[j]+1;
        }
    }
    for(i=0;i<b.length();i++)
    {
        for(j=0;j<26;j++)
        {
            if(b[i]==s[j])
            n[j]=n[j]+1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(f[i]!=n[i])
        {
            if(f[i]>n[i])
            {
            x=f[i]-n[i];
            g=g+x;
            }
            else
            {
            y=n[i]-f[i];
            h=h+y;
            }
        }
    }
    cout<<g+h;
}
