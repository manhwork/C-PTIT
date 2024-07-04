#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll m,n,a,b;
		cin>>m>>n>>a>>b;
		long long c=a*b;
		
		if(n%a==0)
		{
			ll e=n/a+1;
		}
		else e=n/a;;
		long long dem1=((e-m/a))+1;
		if(n%b==0)
		{
			ll f=n/b+1;
		}
		else f=n/b;
		long long dems2=((f-m/b))+1;
		if(n%c==0)
		{
			ll g=n/c+1;
		}
		else g=n/c;
		ll dem3=((g-m/c))+1;
		cout<<dem1+dem2-dem3<<endl;
	}
}