#include<iostream>
using namespace std;
int main()
{
    long long int n,t,i,j,k,a[100000],l,min;
    cin>>n>>t;
    for(k=0;k<n;k++)
    cin>>a[k];
    for(k=0;k<t;k++)
    {
        cin>>i>>j;
        min=a[i];
        for(l=i;l<=j;l++)
        {
            if(a[l]<min)
            min=a[l];
        }
        cout<<min<<"\n";
    }

}
