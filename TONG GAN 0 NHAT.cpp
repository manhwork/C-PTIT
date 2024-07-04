#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ins=INT_MAX;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				ll tmp=a[i]+a[j];
				if(abs(ins)>abs(tmp))
				{
					ins=tmp;
				}
			}
		}
		cout<<ins<<endl;
	}
}