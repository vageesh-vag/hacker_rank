#include<iostream>
using namespace std;
int main()
{
    long long int x1,v1,x2,v2,i,f1=0,f2=0,s=0,v3;
    cin>>x1>>v1;
    cin>>x2>>v2;
    f1=x1+v1;
    f2=x2+v2;
    v3=v1+v2;
    if(f1!=f2)
    {
        for(i=0;i<20000;i++)
    {
        f1=f1+v1;
        f2=f2+v2;
        if(f1==f2)
        s=1;
    }
    if(s==1)
    cout<<"YES";
    else
    cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
