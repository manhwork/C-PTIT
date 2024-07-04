#include<bits/stdc++.h>
using namespace std;
class DN{
	public : 
		string ma,ten;
		int sl;
		void nhap()
		{
			scanf("\n");
			cin>>ma;
			scanf("\n");
			getline(cin,ten);
			cin>>sl;
		}
		void in()
		{
			cout<<ma<<' '<<ten<<' '<<sl<<endl;
		}
};
int cmp(DN a,DN b)
{
	return a.ma<b.ma;
}
int main()
{
	int n;cin>>n;
	DN a[n];
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		a[i].in();
	}
}