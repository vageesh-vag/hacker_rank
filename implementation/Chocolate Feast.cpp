#include<iostream>
using namespace std;
int main()
{
    long int t,i,n,c,m,w;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int f=0;
        cin>>n>>c>>m;
        f=n/c;
        w=f;
        if(f<m)
        cout<<f<<"\n";
        else
        {
            while(w>=m)
            {
                int a=w/m;
                int b=w%m;
                f=f+a;
                w=a+b;
            }
            cout<<f<<"\n";
        }
    }
}
