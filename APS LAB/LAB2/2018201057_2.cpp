#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned long long int t,n;
    int count=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(!(n&n-1))
        {
            cout<<"1"<<"\n";
        }
        
        else
        {
         while(n)
         {
            count+=n&1;
                
             n>>=1;
         }
         cout<<count<<"\n";
        }
        count=0;
    }
    return 0;
}

