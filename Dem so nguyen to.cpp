#include<bits/stdc++.h>
using namespace std;
#define ll long long
int snt(ll n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		int cnt=0;
		for(ll i=a;i<=b;i++)
		{
			if(snt(i)) cnt++;
		}
		cout<<cnt<<endl;
	}
}