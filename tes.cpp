#include<bits/stdc++.h>
using namespace std;
struct nhanvien{
	string msv,ten;
	int hsl,lcb,pc;
};
void nhap(nhanvien &a)
{
	struct nhavien *ptr;
	cin>>ptr->msv;
	cin.ignore();	
	getline(cin,ptr->ten);
	cin>>ptr->hsl>>ptr->lcb>>ptr->pc;
}

long long tong(nhanvien &a)
{
	long long tong;
	tong=a.lcb*a.hsl+a.pc;
	return tong;
}
int main()
{
	struct nhanvien a;
	nhap(a);
	cout<<tong(a);
}
