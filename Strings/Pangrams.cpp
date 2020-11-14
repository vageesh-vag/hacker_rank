#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,b[26],j,f=0;
    string s,a="abcdefghijklmnopqrstuvwxyz",c="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getline(cin,s);
    for(i=0;i<26;i++)
    b[i]=0;
    for(i=0;i<s.length();i++)
    {
        for(j=0;j<26;j++)
        {
            if(s[i]==a[j])
            b[j]=b[j]+1;
            if(s[i]==c[j])
            b[j]=b[j]+1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(b[i]>0)
        f=f+1;
    }
    if(f==26)
    cout<<"pangram";
    else
    cout<<"not pangram";
}
