#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(binary_search(a,a+n,i)) cout<<i<<" ";
			else cout<<"-1 ";
		}
		cout<<endl;
	}
}#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(binary_search(a,a+n,i)) cout<<i<<" ";
			else cout<<"-1 ";
		}
		cout<<endl;
	}
}