#include<bits/stdc++.h>
using namespace  std;

string Min(int m,int  s)
{
	string  a(m,'0');
	a[0]='1';
	s-=1;
	for(int i=m-1;i>0;i--)
	{
		if(s>9)
		{
			a[i]='9';
			s-=(a[i]-'0');
		}
		else 
		{
			a[i]=(s)+'0';
			s=0;
			break;
		}
	}
	if(s>0)
		{
			a[0]=s+'1';
		}
	return  a;
}
string Max(int m,int s)
{
	string  a(m,'0');
	a[0]='9';
	s-=9;
	for(int  i=1;i<m;i++)
	{
		if(s>9)
		{
			a[i]='9';
			s-=9;
		}
		else
		{
			a[i]=(s)+'0';
			s=0;
			break;
		}
	}
	return a;
}

int main()
{
	int  m,s;
	cin>>m>>s;
	if(m==1&&s==0)  cout<<"0  0";
	else if(s>9*m or s==0) cout<<"-1 -1";
	else 
	{
		cout<<Min(m,s)<<"  "<<Max(m,s);
	}
}