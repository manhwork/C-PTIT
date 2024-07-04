#include<fstream>a
#include<iostream>
using namespace std;
struct nv{
	string ma,ten;
	float hs,lcb,pc,tong;
};
void nhap(nv &a)
{
	ifstream fileds;
	fileds.open("nv.in");
	cin.ignore();
	fileds<<a.ma;
	cin.ignore();
	getline(fileds,a.ten);
	fileds<<a.hs<<a.lcb<<a.pc;
	a.tong=a.lcb*a.hs+a.pc;
	fileds.close();
}  
void in(nv a)
{
	ofstream fileout;
	fileout.open("nv.out");
	fileout>>a.tong;
	fileout.close();
}
int main()
{
	nv a[10];
	for(int i=0;i<10;i++)
	{
		nhap(a[i]);
		in(a[i]);
	}
	
	 
}