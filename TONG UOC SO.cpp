#include<bits/stdc++.h>
using namespace std;

long long sum(int n) {
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

int main() {
	int t;
	cin>>t;
	long long tong =0;
	int a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<t;i++)
	{
		tong+=sum(a[i]);
	}
	cout<<tong<<endl;
}