#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long sum(ll  n) {
	long long s=0;
	for(int i=2; i<=sqrt(n); i++) {
		while(n%i==0) {
			s+=i;
			n/=i;	
		}
	}
	if(n!=1) s+=n;
	return s;
}

long long tong(ll n)
{
	ll s=0;
	while(n)
	{
		ll k=n%10;
		s+=k;
		n/=10;
	}
	return s;
}


int main()
{
	ll n;cin>>n;
	if(sum(n)==tong(n)) cout<<"YES";
	else cout<<"NO";
}