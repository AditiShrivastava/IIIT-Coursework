#include<bits/stdc++.h>
using namespace std;
//#define ull unsigned long long int;
unsigned long long int arr[2046],l,r,sum=0;

/*int bs(unsigned long long int w,unsigned long long int p,unsigned long long int q)
{
	int mid;
	if(w<arr[p])
		return p;

	mid=(p+(q-p)/2);
	if(arr[mid]==w)
	{
		return mid;
	}
	else if(arr[mid]<w)
	{
		if((mid+1)<=q && arr[mid+1]>=w)
			return (mid+1);
		else
			return bs(l,mid+1,q);
	}
	else 	
	{
		if((mid-1)>=p && arr[mid-1]<=w)
			return (mid-1);
		else
			return bs(w,p,mid-1);
	}
}*/

unsigned long long int bs(unsigned long long int w,unsigned long long int p,unsigned long long int q)
{	
	int mid;
	if(w<=arr[p])
		return p;
	else
	{
		while(q-p>0)
		{
			if(arr[mid]==w)
				return mid;
			else if(arr[mid]<=w)
				p=mid+1;
			else 
				q=mid;
		}
	}
	return p;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		//freopen("output.txt","w",stdout);
	#endif
		// **** code goes here ****
		long long int t,i,j,k,index;
		arr[0]=4;
		arr[1]=7;
		
		j=2
;		for(i=0;i<2046 && j<2046;i++)
		{
			arr[j]=arr[i]*10+4;
			arr[j+1]=arr[i]*10+7;
			j+=2;
		}
		/*for(i=0;i<2046;i++)
			cout<<arr[i]<<"\n";*/
		
		cin>>t;
		while(t--)	
		{	
			cin>>l>>r;
			for(i=l;i<=r;i+=k)
			{
				index=bs(i,0,2045);
				cout<<index<<"\n";
				k=arr[index]-i+1;
				cout<<k<<"\n";
				if(arr[index]<r)
				{
					sum+=(arr[index]*k);
				}
				else
				{
					sum+=(r-i+1)*arr[index];
				}
			}
			cout<<sum<<"\n";
			sum=0;
		}	

	return 0;

}