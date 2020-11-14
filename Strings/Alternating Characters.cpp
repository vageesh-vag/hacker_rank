#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j;
    long long int f;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        f=0;
        for(j=0;j<s.length()-1;j++)
        {
            if(s[j]==s[j+1])
            f=f+1;
        }
        cout<<f<<"\n";
    }
}
