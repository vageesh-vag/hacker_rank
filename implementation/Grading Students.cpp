#include<iostream>
using namespace std;
int main()
{
    int grades[100],i,n,a;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>grades[i];
    for(i=0;i<n;i++)
    {
    if(grades[i]<38)
    grades[i]=grades[i];
    else
    {
        a=grades[i]%5;
        if((grades[i]+5-a)-(grades[i])<3)
        grades[i]=grades[i]+5-a;
    }
    }
    for(i=0;i<n;i++)
    cout<<grades[i]<<"\n";
}
