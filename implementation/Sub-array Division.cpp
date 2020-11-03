#include<iostream>
using namespace std;
int main()
{
    int i,m,d,sum,s[100],n,j,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>s[i];
    cin>>d>>m;
    for(i=0;i<n-m+1;i++)
    {
        sum = 0;
        for(j=i; j < i+m; j++)
        {
            sum = sum + s[j];
        }
        if (sum == d)
        {
            c++;
        }
    }
    cout<<c;
}
