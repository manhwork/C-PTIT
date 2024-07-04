#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,sex,ns,dc,mst,hd;
};
void nhap(NhanVien &a)
{
	getline(cin,a.name);
	cin>>a.sex>>a.ns;
	cin.ignore();	
	getline(cin,a.dc);
	cin>>a.mst>>a.hd;
}
void in(NhanVien a)
{
	cout<<"00001 "<<a.name<<" "<<a.sex<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.hd;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}