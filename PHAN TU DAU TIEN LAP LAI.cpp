#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		int b[n]={0};
		int ok=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
			if(b[a[i]]>1)
			{
				cout<<a[i]<<endl;
				ok=1;
				break;
			}
			if(ok) break;
		}
		if(!ok) cout<<"-1\n";
	}
}