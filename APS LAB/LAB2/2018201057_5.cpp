#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1000;
long long int f[MAX] = {0};

long long int fib(long long int n)
{

    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    if (f[n])
        return f[n];
 
    int k = (n & 1)? (n+1)/2 : n/2;

    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    return f[n];
}

int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {    
        cin>>n;
        cout<<fib(n)<<"\n";
    }
     return 0;
}
