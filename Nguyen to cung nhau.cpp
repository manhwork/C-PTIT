#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll snt(ll n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1;
}

ll PhiEuler(ll n)
{
	ll tmp=n;
	for(int i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			n/=i;
		}
		if(n%i==0)
		{
			tmp=tmp-tmp/i;
		}
	}
	if(n!=1) tmp=tmp-tmp/n;
	return tmp;
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		if(snt(PhiEuler(n))) cout<<"1\n";
		else cout<<"0\n";
//		cout<<PhiEuler(n)<<endl;
	}
}