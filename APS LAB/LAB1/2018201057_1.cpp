#include<bits/stdc++.h>
using namespace std;

long long int arr[1000000];
bool lookup[1000000];

int swaps(long long int n)
{
    pair<long long int, long long int> p[n];
    
    for (long long int i = 0; i < n; i++)
    {
        p[i].first = arr[i];

        p[i].second = i;
    }
    
    sort(p, p+n);
    long long int ans = 0;
    
    for (long long int i = 0; i < n; i++)
    {    
                
        if (lookup[i] || p[i].second == i)
            continue;
            
        long long int cycle_size = 0;
        long long int j=i;
        while (!lookup[j])
        {
            lookup[j] = 1;
            j = p[j].second;
            cycle_size++;
        }
        
        ans += (cycle_size - 1);
    }
    
    return ans;
    
}

int main()
{

    long long int n;
    scanf("%lld", &n);
    
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int ans = swaps(n);
    printf("%lld\n", ans);
    return 0;
    
}
