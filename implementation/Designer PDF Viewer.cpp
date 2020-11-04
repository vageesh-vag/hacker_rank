#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a[26],i,c[10],j,k,max;
    string s,b={"abcdefghijklmnopqrstuvwxyz"};
    for(i=0;i<26;i++)
    cin>>a[i];
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        for(j=0;j<26;j++)
        {
            if(s[i]==b[j])
            {
               c[k]=a[j];
               k=k+1;
            }
        }
    }
    max=c[0];
    for(i=0;i<s.length();i++)
    {
        if(c[i]>max)
        max=c[i];
    }
    cout<<s.length()*max;
}
