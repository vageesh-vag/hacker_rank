#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,k,i,j;
    string a,s="abcdefghijklmnopqrstuvwxyz",c="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string d="<>,./?'!*()\_+=-{}[]`#$%^";
    cin>>n;
    cin>>a;
    cin>>k;
    char b;
    for(i=0;i<n;i++)
    {
        for(j=0;j<26;j++)
        {
            if(a[i]==s[j])
            {
                b=j+k;
                b=b%26;
                cout<<s[b];
                break;
            }
            if(a[i]==c[j])
            {
                b=j+k;
                b=b%26;
                cout<<c[b];
                break;
            }
            if(a[i]==d[j])
            {
            cout<<a[i];
            break;
            }
            if(a[i]>='0'&&a[i]<='9')
            {
            cout<<a[i];
            break;
            }
        }
    }
}
