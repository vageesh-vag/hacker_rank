#include<iostream>
using namespace std;
int main()
{
    long long int n,s[1000],i,max,min,mini=0,maxi=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>s[i];
    max=min=s[0];
    for(i=0;i<n;i++)
    {
        if(s[i]<min)
        {
            min=s[i];
            mini=mini+1;
        }
        if(s[i]>max)
        {
            max=s[i];
            maxi=maxi+1;
        }
    }
    cout<<maxi<<" "<<mini;
}
