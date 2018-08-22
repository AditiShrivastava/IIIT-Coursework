#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ios::sync_with_stdio(false);
    string str,pat("1");
    long long int n;
    size_t found;
    
    cin>>n;
    while(n--)
    {
        fflush(stdin);
        cin>>str;
        found=str.find(pat);
        if(found!=string::npos)
            cout<<found<<" ";
        else 
            cout<<"-1"<<" ";
    }
    
    return 0;
}

