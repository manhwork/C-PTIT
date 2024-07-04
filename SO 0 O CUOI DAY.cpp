#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		ll a[n];
		ll b[n]={};
		int dem=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=0)
			{
				b[k]=a[i];
				k++;
			}
			else dem++;
		}
		for(int i=0;i<k;i++)
		{
			cout<<b[i]<<" ";
		}
		for(int i=0;i<dem;i++)
		{
			cout<<"0 ";
		}
		cout<<endl;	
	}
}
