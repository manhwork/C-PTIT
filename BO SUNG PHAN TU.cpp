#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n-1;i++)
		{
			int k=a[i+1]-a[i];
			if(k>1)
			{
				dem+=(k-1);
			}
		}
		cout<<dem<<endl;
	}
}