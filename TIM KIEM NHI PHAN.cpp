#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool binarysearch(int a[],int l,int r,int x)
{
	if(l>r) return false ;
	if(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
		{
			return true ;
		}	
		else if(a[mid]>x)
		{
			return binarysearch(a,l,mid-1,x);
		}
		else {
			return binarysearch(a,mid+1,r,x);
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int l=0;
		int r=n-1;
		if(binarysearch(a,l,r,x)) cout<<"1\n";
		else cout<<"-1\n";
	}
}