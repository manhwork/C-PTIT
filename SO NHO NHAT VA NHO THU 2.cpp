#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int dem =-1;
		for(int i=1;i<n;i++)
		{
			if(a[i]!=a[0])
			{
				dem=i;
				break;
			}
		}
		if(dem!=-1) cout<<a[0]<<" "<<a[dem]<<endl;
		else cout<<"-1\n";
	}
}