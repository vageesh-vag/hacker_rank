#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100],x='0',y='1';
    int i,n,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>str[i];
    for(i=0;i<n;i++)
    {
        if((str[i]==x)&&(str[i+1]==y)&&(str[i+2]==x))
        {
        count=count+1;
        i=i+2;
        }
    }
    cout<<count;
}
