#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,m,k,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>r(n);
        vector<int>s(m);
        for(i=0;i<n;i++)
        {
            cin>>r[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>s[i];
        }
        cin>>k;
        i=j=0;
        int res;
        int count=0;
        for(p=0;p<k;p++)
        {
            while(i<n && j<m && count<k)
            {
                if(r[i]<=s[j]){
                    res=r[i];
                    i++,count++;
                }
                else{
                    res=s[j];
                    j++,count++;
                }
                  
            }
            if(j>m-1 && i<n && count<k){
                res=r[i];
                i++,count++;
            }
            if(i>n-1 && j<m && count<k){
                res=s[j];
                j++,count++;
            }
        }
        cout<<res<<"\n";
    }

    return 0;
}

