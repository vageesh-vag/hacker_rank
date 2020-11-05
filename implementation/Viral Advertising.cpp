#include<iostream>
using namespace std;
int main()
{
    int n,i,s=5,l,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        l=s/2;
        c=c+l;
        s=l*3;
    }
    cout<<c;
}
