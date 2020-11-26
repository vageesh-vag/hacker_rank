#include<iostream>
#include<string.h>
using namespace std;
int maxi(int a[26]);
int main()
{
    int i,a[26],max;
    string s,b="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    for(i=0;i<26;i++)
    a[i]=0;
    for(i=0;i<s.length();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(s[i]==b[j])
            a[j]=a[j]+1;
        }
    }
    int f=0;
    for(i=0;i<26;i++)
    {
        if(a[i]>0)
        f=f+1;
    }
    max=maxi(a);
    int g=0;
    for(i=0;i<26;i++)
    {
        if(a[i]==max)
        g=g+1;
    }
    int k=0;
    if(f==g)
    cout<<"YES";
    else
    {
        int l=0;
        for(i=0;i<26;i++)
        {
            if(a[i]==1)
            l=l+1;
        }
        if(l==1)
        {
            for(i=0;i<26;i++)
            {
                if(a[i]==1)
                a[i]=a[i]-1;
            }
            for(i=0;i<26;i++)
            {
                if(a[i]==max)
                k=k+1;
            }
            if(k==f-1)
            cout<<"YES";
            else
            cout<<"NO";            
        }
        else
        {
            for(i=0;i<26;i++)
            {
                if(a[i]==max)
                {
                    max=max-1;
                    a[i]=a[i]-1;
                    break;
                }
            }
            for(i=0;i<26;i++)
            {
                if(a[i]==max)
                k=k+1;
            }
            if(f==k)
            cout<<"YES";
            else
            cout<<"NO";
        }
    }    
}
int maxi(int a[26])
{
    int max=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
