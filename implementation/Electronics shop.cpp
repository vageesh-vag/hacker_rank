#include<iostream>
using namespace std;
int main()
{
    long long int b,n,m,keyboard[1000],driver[1000],i,j,max;
    cin>>b;
    cin>>n>>m;
    for(i=0;i<n;i++)
    cin>>keyboard[i];
    for(i=0;i<m;i++)
    cin>>driver[i];
    max=-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if (keyboard[i] + driver[j] <= b && keyboard[i] + driver[j] > max)
                    max = keyboard[i] + driver[j];
        }
    }
    cout<<max;
}
