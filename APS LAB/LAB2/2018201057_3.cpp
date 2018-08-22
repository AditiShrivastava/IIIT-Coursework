#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //freopen("input.txt","r".stdin);
    //freopen("output.txt","w",stdout);
    map<string,int> temp;
    map<string,int>::iterator itr;
    string str;
    long long int n,max=0;
    cin>>n;
    while(n--)
    {
        cin>>str;
        sort(str.begin(),str.end());
        itr=temp.find(str);
        if(itr != temp.end())
        {
            (itr->second)++;
        }
        else
        {
            temp.insert( pair<string, int>(str, 1) );
        }
        for(itr=temp.begin();itr!=temp.end();itr++)
        {
            if((itr->second)>max)
                max=itr->second;
        }
       
    }
    cout<<max;
    return 0;
    
}
