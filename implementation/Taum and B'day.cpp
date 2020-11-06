#include<iostream>
using namespace std;
int main()
{
    long long int i,t,b,w,bc,wc,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>b>>w;
        cin>>bc>>wc>>z;
        bc = bc>wc? ((bc-wc>z)? wc+z : bc) : bc;
        wc = wc>bc? ((wc-bc>z)? bc+z : wc) : wc;
        cout<<b*bc+w*wc<<"\n";
    }
}
