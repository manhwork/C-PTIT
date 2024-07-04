#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n-1;i++)
		{
			cin>>a[i];
		}
		int ok=0;
		for(int i=0;i<n-2;i++)
		{
			int k=a[i+1]-a[i];
			if(k>1)
			{
				cout<<a[i]+1<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<a[n-2]+1<<endl;
	}
}