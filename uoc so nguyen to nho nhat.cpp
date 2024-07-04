#include<bits/stdc++.h>
using namespace std;
int snt(int n)
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
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int ok=1;
			if(i==1) {
				cout<<"1 ";
				ok=0;
			}
			if(i%2==0) 
			{
				cout<<"2 ";
				ok =0;
			}
			if(snt(i) and i!=2) {
				cout<<i<<" ";
				ok=0;
			}
			if(ok)
			{
				int indx;
				for(int j=3;j<=sqrt(i);j++)
				{
					if(i%j==0)
					{
						indx=j;
						break;
					}
				}
				cout<<indx<<" ";
			}
		}
		cout<<endl;
	}
}