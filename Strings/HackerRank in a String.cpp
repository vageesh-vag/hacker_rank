#include<iostream>
#include<string>
using namespace std;
int main()
{
    int q,i,j,k,f;
    string s,a="hackerrank";
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>s;
        f=0;
        k=0;
        for(j=0;j<s.length();j++)
        {
            if(s[j]==a[k])
            {
                k=k+1;
                f=f+1;
            }
        }
        if(f==10)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}
