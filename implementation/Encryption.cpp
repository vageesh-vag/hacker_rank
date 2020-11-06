#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,m,n;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if((s.length()>(i*i))&&(s.length()<=((i+1)*(i+1))))
        {
        m=i;
        n=i+1;
        }
        if((m*n)<s.length())
        m=n;
    }
    //cout<<m<<n;
    for(i=0;i<n;i++)
    {
        for(j=i;j<s.length();j=j+n)
        cout<<s[j];
        cout<<" ";
    }
}
