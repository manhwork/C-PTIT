#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
	long long sum=0;
	for(char x : s)
	{
		sum=sum*2+(x-'0');
		sum%=5;
	}
	if(sum%5==0) return 1;
	else return 0;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(check(s)) cout<<"Yes\n";
		else cout<<"No\n";
	}
}