#include<bits/stdc++.h>
using namespace std;
#define dd double
int main()
{
	int n;
	cin>>n;
	double a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int k=0;
	for(int i=1;i<=n-2;i++)
	{
		if(a[i]!=a[0] and a[i]!=a[n-1])
		{
			b[k]=a[i];
			k++;
		}
	}
	double sum=0;
	for(int m=0;m<k;m++)
	{
		sum+=b[m];
	}
	cout<<fixed<<setprecision(2)<<sum/(k)<<endl;
}