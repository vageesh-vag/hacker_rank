#include<iostream>
using namespace std;
int main()
{
    int i,l,r,f,g=0;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    {
        for(int j=l;j<=r;j++)
        {
            f=i^j;
            if(f>g)
            g=f;
        }
    }
    cout<<g;
}
