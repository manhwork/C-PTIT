#include<bits/stdc++.h>
using namespace std;
#define ll long long

int snt(ll n) {
	if(n==2) return 1;
	if(n<2 or n%2==0) return 0;
	for(int i=3; i<=sqrt(n); i+=2) {
		if(n%i==0) {
			return 0;
		}
	}
	return n;
}

int tanggiam(ll n) {
	int ok;
	if(n%10<=((n/10)%10)) ok=0;
	else ok=1;
	while(n>9) {
		if(ok)
		{
			if(n%10<=((n/10)%10)) return  0;
		}
		else 
		{
			if(n%10>=((n/10)%10)) return  0;
		}
		n/=10;
	}
	return 1;
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		ll dem =0;
		ll a=pow(10,n-1);
		ll b=pow(10,n);
		for(ll i=a; i<b; i++) {
			if(tanggiam(i)&&snt(i)) {
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}