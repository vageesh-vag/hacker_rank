#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j;
    string s[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=0&&i!=n-1&&j!=0&&j!=n-1)
            {
                if((s[i][j]>s[i][j-1])&&(s[i][j]>s[i][j+1])&&(s[i][j]>s[i+1][j])&&(s[i][j]>s[i-1][j]))
                {
                    s[i][j]='X';
                }
            }
        }
    }
    for(i=0;i<n;i++)
    cout<<s[i]<<"\n";
}
