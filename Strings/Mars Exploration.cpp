#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s;
int i,n,f=0;
cin>>s;
for(i=0;i<s.length();i=i+3)
{
    if(s[i]=='S'||s[i+1]=='O'||s[i+2]=='S')
    {
        if(s[i]=='S')
        f=f+1;
        if(s[i+1]=='O')
        f=f+1;
        if(s[i+2]=='S')
        f=f+1;
    }
}
cout<<s.length()-f;
}
