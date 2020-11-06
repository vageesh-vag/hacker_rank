#include<iostream>
using namespace std;
int minimum(int a,int b);
int main()
{
    long long int n,a[100000],i,j,min=-1,min1=-1;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            min=minimum(i,j);
        }
        if(min1==-1)
        min1=min;
        else if(min<min1)
        min1=min;
    }
    cout<<min1;
}
int minimum(int a,int b)
{
    if(a>b)
    return a-b;
    else
    return b-a;
}
