#include<iostream>
using namespace std;
int main()
{
    long long int n,t=1,v=3,t1,v1;
    cin>>n;
    if(n<=3)
    cout<<v-(n-t);
    else
    {
        while(t<=n)
        {
            t1=t;
            v1=v;
            t=t+v;
            v=v*2;
        }
        cout<<v1-(n-t1);
    }
}
