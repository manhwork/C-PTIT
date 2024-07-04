#include<bits/stdc++.h>
using namespace std;
int stt=1;

string loai(double x)
{
	if(x<5) return "YEU";
	if(x<=6.9) return "TB";
	if(x<=7.9) return "KHA";
	if(x<=8.9) return "GIOI";
	return "XUAT SAC";
}
class HS{
	public:
		string ten;
		double A[10];
		double tb;
		string ma;
		void nhap()
		{
			scanf("\n");
			getline(cin,ten);
			double tong=0;
			for(int i=0;i<10;i++)
			{
				cin>>A[i];
				tong+=A[i];
			}
			tong+=A[0];
			tong+=A[1];
			tb=tong/12;
			tb*=10;
			if(tb-(int)(tb)>=0.5){
				tb=(int)tb+1;
			}
			else {
				tb=(int)tb;
			}
			tb/=10;
			ma=to_string(stt);
			while(ma.size()<2)
			{
				ma="0"+ma;
			}
			stt++;
		}
		void in()
		{
			cout<<"HS"<<ma<<' '<<ten<<' '<<fixed<<setprecision(1)<<tb<<' '<<loai(tb)<<endl;
		}
};
int cmp(HS a,HS b)
{
	return a.tb>b.tb;
}
int main()
{
	int n;cin>>n;
	HS hs[50];
	for(int i=0;i<n;i++)
	{
		hs[i].nhap();
	}
	sort(hs,hs+n,cmp);
	for(int i=0;i<n;i++)
	{
		hs[i].in();
	}
}