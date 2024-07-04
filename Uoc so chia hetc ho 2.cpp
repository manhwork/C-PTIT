#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll uoc(ll n) {
	ll dem=0;
	if(n%2==0) {
		ll m=sqrt(n);
		for(int i=1; i<=m; i++) {
			if(n%i==0 ) {
				if(i%2==0)	dem++;
				if(i!=n/i and (n/i)%2==0) dem++;
			}
		}
	}
	return dem;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		cout<<uoc(n)<<endl;
	}
}