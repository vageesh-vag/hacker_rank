#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j;
    string s;
    cin>>s;
    i=0;
    while(i<s.length())
    {
        if(s[i]==s[i+1])
        {
                s=s.replace(i,2,"");
                i=0;
        }
        else
        i=i+1;          
    }
    if(s.length()>0)
    cout<<s;
    else
    cout<<"Empty String";
}
