#include<iostream>
using namespace std;
int search(int n,int p[50],int a);
int main()
{
    int n,p[50],i,a,y,j=1;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>p[i];
    for(i=1;i<=n;i++)
    {
        a=search(n,p,i);
        y=search(n,p,a);
        cout<<y<<"\n";
    }
}
int search(int n,int p[50],int a)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a==p[i])
        return i;
    }
    return 0;
}
