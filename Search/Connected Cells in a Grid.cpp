#include<iostream>
using namespace std;
int count(int a[10][10],int n,int m,int b)
{
    int f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==b)
            f=f+1;
        }
    }
    return f;
}
int grid(int a[10][10],int m,int n,int b)
{
    a[m][n]=b;
    if(a[m-1][n+1]==1)
    grid(a,m-1,n+1,b);
    if(a[m][n-1]==1)
    grid(a,m,n-1,b);
    if(a[m][n+1]==1)
    grid(a,m,n+1,b);
    if(a[m+1][n-1]==1)
    grid(a,m+1,n-1,b);
    if(a[m+1][n]==1)
    grid(a,m+1,n,b);
    if(a[m+1][n+1]==1)
    grid(a,m+1,n+1,b);  
    return 0;
}
int main()
{
    int n,m,a[10][10],i,j,b=2,f=0,g=0;
    cin>>n;
    cin>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                a[i][j]=b;
                if(a[i][j+1]==1)
                grid(a,i,j+1,b);
                if(a[i+1][j-1]==1)
                grid(a,i+1,j-1,b);
                if(a[i+1][j]==1)
                grid(a,i+1,j,b);
                if(a[i+1][j+1]==1)
                grid(a,i+1,j+1,b);
                f=count(a,n,m,b);
                if(f>g)
                g=f;  
                b=b+1;
            }
        }
    }
    cout<<g;
}
