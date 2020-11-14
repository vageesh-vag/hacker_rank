#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int i,f=0,b[26],j;
    string a,s="abcdefghijklmnopqrstuvwxyz";
    for(i=0;i<26;i++)
    b[i]=0;
    cin>>a;
    for(i=0;i<a.length();i++)
    {
        for(j=0;j<26;j++)
        {
            if(a[i]==s[j])
            b[j]=b[j]+1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(b[i]%2==1)
        f=f+1;
    }
    if(f==0||f==1)
    cout<<"YES";
    else
    cout<<"NO";
}
