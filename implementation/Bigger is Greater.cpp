#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int main() {
    long long int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        string ss=s;
        int i=s.length()-1;
        int pivot;
        while(s[i-1]>=s[i]&&i>=0)
            i--;
        if(i!=0)
          {
            pivot=i-1;
            int min=INT_MAX;
            int index;
            for(int j=i;j<s.length();j++)
              {
                if(int(s[j])>int(s[pivot])&&min>int(s[j])){
                    min=s[j];
                    index=j;
                }
            }
           char temp=s[pivot];
            s[pivot]=s[index];
            s[index]=temp;
            sort(s.begin()+i,s.end());
            cout<<s<<endl;
        }
        else
            cout<<"no answer\n";
         t--;    
    }        
    return 0;
}
