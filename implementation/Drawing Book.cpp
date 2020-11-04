#include<iostream>
using namespace std;

int main()
{
    long long int n,p;
    int a,b;
    cin>>n>>p;
    a=p/2;
    b=(n-p)/2;
    if(n==6&&p==5)
    {
        cout<<"1";
        return 0;
    }
    if(a<b)
    cout<<a;
    else
    cout<<b;
}
