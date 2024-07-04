#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll m,n,a,b;
		cin>>m>>n>>a>>b;
		ll dem=0;
		for(int i=m;i<=n;i++)
		{
			if(i%a==0||i%b==0) dem++;
		}
		cout<<dem<<endl;
	}
}