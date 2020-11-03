#include<iostream>
using namespace std;
int main()
{
    long long int n,k,bill[100000],b,i,f=0,g;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>bill[i];
    cin>>b;
    for(i=0;i<n;i++)
    f=f+bill[i];
    for(i=0;i<n;i++)
    g=f-bill[k];
    if((g/2)==b)
    cout<<"Bon Appetit";
    else
    cout<<b-(g/2);
}
