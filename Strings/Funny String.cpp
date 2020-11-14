#include<iostream>
#include<string.h>
using namespace std;
int max(char x,char y);
int main()
{
    int t,i,j,a[10000],b[10000],k,l;
    string s1,s2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s1;
        k=0;
        for(j=0;j<s1.length()-1;j++)
        {
            a[k]=max(s1[j],s1[j+1]);
            k=k+1;
        }
        l=0;
        for(j=s1.length()-1;j>0;j--)
        {
            b[l]=max(s1[j],s1[j-1]);
            l=l+1;
        }
        int f=0;
        for(j=0;j<s1.length()-1;j++)
        {
            if(a[j]==b[j])
            f=f+1;
        }
        if(f==s1.length()-1)
        cout<<"Funny"<<"\n";
        else
        cout<<"Not Funny"<<"\n";
    }
}
int max(char x,char y)
{
    if(x>y)
    return x-y;
    else if(x<y)
    return y-x;
    else
    return x-y;
}
