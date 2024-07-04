#include<bits/stdc++.h>
using namespace std;
struct monhoc{
	string mamh,tenmh;
	float stc,dcc,dkt,dt,tb;
};
struct sinhvien {
	string msv,ten,lop;
	int k;
	struct monhoc dsmh[100];
	 
};
void nhap(monhoc &a )
{
	cin.ignore();
	cin>>a.mamh;
	cin.ignore();
	getline(cin,a.tenmh);
}
void Nhap(sinhvien &a)
{
	cin.ignore();
	cin>>a.msv;
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.lop;
	cin.ignore();
	cin>>a.k;
	for(int i=0; i<a.k; i++){
		cin >>a.dsmh[i].stc >> a.dsmh[i].dcc >> a.dsmh[i].dkt >> a.dsmh[i].tb;
	}
}
void in(sinhvien b[], int m){
	for(int i=0; i<m; i++) {
		cout << b[i].msv << " " << b[i].ten << " " << b[i].lop << " ";
		for(int j=0; j<b[i].k; j++){
			cout <<b[i].dsmh[j].stc <<" " <<b[i].dsmh[j].dcc <<" " <<b[i].dsmh[j].dkt << " "<<b[i].dsmh[j].tb;
	}		
	cout << endl;
	}
}


int main()
{
	int n,m;
	cin>>n>>m;
	struct monhoc a[n];
	struct sinhvien b[m];
	for(int i=0;i<m;i++)
	{
		Nhap(b[i]);
		for(int j=0; j<n; j++) if(b[i].dsmh[j].dtb>=7.0) in(b, m);
	}
}