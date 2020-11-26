#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],j,i,pivot,left=0,rigth=0,b[1000];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    pivot=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<pivot)
        left=left+1;
    }
    for(i=0;i<n;i++)
    b[i]=0;
    b[left]=pivot;
    j=0;
    left=left+1;
    for(i=0;i<n;i++)
    {
        if(a[i]<pivot)
        {
            b[j]=a[i];
            j=j+1;
        }
        if(a[i]>pivot)
        {
            b[left]=a[i];
            left=left+1;
        }
    }
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";
}
