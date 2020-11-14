#include<iostream>
#include<string.h>
using namespace std;
int max(char x,char y);
int main()
{
    int i,n,j,k,a,f;
    string s;
    cin>>n;
    for(j=0;j<n;j++)
    {
        int g;
        f=0;
        cin>>s;
        a=s.length();
        if(a%2==0)
        {
           for(i=0,k=a-1;i<a/2,k>=a/2;i++,k--)
           {
               g=max(s[i],s[k]);
               f=f+g;
           } 
        }
        else
        {
            for(i=0,k=a-1;i<a/2,k>a/2;i++,k--)
            {
                g=max(s[i],s[k]);
                f=f+g;
            }
        }
        cout<<f<<"\n";
    }
}
int max(char x,char y)
{
    if(x>y)
    return x-y;
    else {
    return y-x;
    }
}
