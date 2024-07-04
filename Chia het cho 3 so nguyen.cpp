#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll m=pow(10,d-1);
		ll t=a*b*c;
		double f=(double)m/t;
		double e=(double)(t-1)/t;
		if(t>=m*10) cout<<"-1\n";
		else {
			cout<<(long long)(f+e)*t<<endl;
		}
	}
}