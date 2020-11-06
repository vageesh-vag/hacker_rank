#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int h,m;
    string s[30]={"zero","one","two","three","four","five","six","seven","eight","nine",    "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",      "eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"
};
cin>>h>>m;
if(m==0)
cout<<s[h]<<" o' clock";
else if(m>0&&m<10)
cout<<s[m]<<" minute past "<<s[h];
else if(m==15)
cout<<"quarter past "<<s[h];
else if(m>10&&m<30)
cout<<s[m]<<" minutes past "<<s[h];
else if(m==30)
cout<<"half past "<<s[h];
else if(m==45)
cout<<"quarter to "<<s[h+1];
else if(m>30&&m<51)
cout<<s[60-m]<<" minutes to "<<s[h+1];
else if(m>50)
cout<<s[60-m]<<" minutes to "<<s[h+1];
}
