#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int i,f=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        f=f+1;
    }
    cout<<f+1;
}
