#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		int ok=0;
		int dem =0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==x) 
			{
				dem ++;
				ok=1;
			}
		}
		if(ok) cout<<dem<<endl;
		else cout<<"-1\n";
	}
}