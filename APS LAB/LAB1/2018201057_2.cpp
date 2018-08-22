#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n,max;
    long long int i;
    cin>>n;
    vector<unsigned long long int>h(n);
    vector<unsigned long long int>s(n);
    s[n-1]=1;
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }
    max=h[n-1];
    for(i=n-2;i > -1;i--)
    {
        if(h[i]>max){
            s[i]=1;
            max=h[i];
        }
        else
            s[i]=0;
    }
    for(i=0;i<n;i++)
        cout<<s[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

