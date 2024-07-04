#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		
		int n;cin>>n;
		int a[n];
		int ok=0;
		map<int,int> map;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			
			map[a[i]]++;
			if(map[a[i]]>1)
			{
				ok=1;
				cout<<a[i]<<endl;
				break;
			}
		}
		if(ok==0) cout<<"-1\n";
	}
}