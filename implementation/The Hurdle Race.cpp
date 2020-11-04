#include<iostream>
using namespace std;
int main()
{
    int n,k,height[100],i,max=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>height[i];
    for(i=0;i<n;i++)
    {
        if(max<height[i])
        max=height[i];
    }
    if(max>k)
    cout<<max-k;
    else
    cout<<"0";
}
