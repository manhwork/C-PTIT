#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll n,ll p) {
	ll x=0;
	for(ll i=2; i<=n; i++) {
		int m=i;
		while(m%p==0)
		{
			x++;
			m/=p;
		}
	}
	return x;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		cout<<check(n,p)<<endl;
	}
}