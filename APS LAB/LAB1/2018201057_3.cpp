#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n,i,j,mi,ma,q,x;
    bool flag=false;
    cin>>n;
    vector<long long int>s(n);
    for(i=0;i<n;i++)
        cin>>s[i];
    sort(s.begin(),s.end());
    mi=s[0];
    ma=s[n-1];
    cin>>q;
    while(q--)
    {
        i=0;
        j=n-1;
        cin>>x;
        if(x<=mi || x> 2*ma)
            flag=false;
        else{
            while(i<=j && !flag)
            {
                if(s[i]+s[j]==x)
                    flag=true;
                else if((s[i]+s[j])<x)
                    i++;
                else 
                    j--;
            }
        }
        if(flag)
            cout<<"Yes"<<"\n";
        else 
            cout<<"No"<<"\n";
        flag=false;
    }
        
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

