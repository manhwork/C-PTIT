#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return n>1;
}
int main()
{
	int a,b;cin>>a>>b;
	if(a>b)
	{
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(int i=a;i<=b;i++)
	{
		if(snt(i)) cout<<i<<" ";
	}
}