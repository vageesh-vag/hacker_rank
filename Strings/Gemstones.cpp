#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j,a[26],k,f,b=0;
    string s,g="abcdefghijklmnopqrstuvwxyz";
    cin>>n;
    f=1;
    for(j=0;j<26;j++)
    a[j]=0;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<s.length();j++)
        {
            for(k=j+1;k<s.length();k++)
            {
                if(s[j]==s[k])
                s=s.replace(k,1,"");
            }
        }
        for(j=0;j<s.length();j++)
        {
            for(k=0;k<26;k++)
            {
                if(s[j]==g[k])
                {
                    if(a[k]<f)                            
                    a[k]=a[k]+1;
                }
            }
        }
        f=f+1;
    }
    for(j=0;j<26;j++)
    {
        if(a[j]==n)
        b=b+1;
    }
    cout<<b;
}
