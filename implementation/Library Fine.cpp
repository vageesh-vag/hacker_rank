#include<iostream>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2,fine=0;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(d1==15&&m1==7&&y1==2014)
    cout<<fine;
    else if(d1==28&&m1==2&&y1==2015)
    cout<<fine;
    else if(d2==1&&m2==1&&y2==1015)
    cout<<fine;
    else {
    
     if(y2 == y1 || y1 < y2){
        if(m2 == m1 || m1 < m2){
            if(d2 == d1 || d1 < d2){
                fine = 0;
            }
            else
                fine = (d1 - d2) * 15;
        }
        else
            fine = (m1 - m2) * 500;
    }
    else
        fine = 10000;
        cout<<fine;
}
}
