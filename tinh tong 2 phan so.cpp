#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
	return a*(b/gcd(a,b));
}

struct PhanSo{
	ll tu,mau;
};

void nhap(PhanSo &p)
{
	cin>>p.tu>>p.mau;
}

struct PhanSo tong(PhanSo p,PhanSo q)
{
	struct PhanSo t;
	ll l=lcm(p.mau,q.mau);
	ll tongtu;
	tongtu=p.tu*(l/p.mau)+q.tu*(l/q.mau);
	ll g=gcd(tongtu,l);
	tongtu/=g;
	t.tu=tongtu;
	l/=g;
	t.mau=l;
	return t;
}
void in(PhanSo t)
{
	cout<<t.tu<<"/"<<t.mau;
}





int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}