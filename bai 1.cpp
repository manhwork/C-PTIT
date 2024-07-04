#include<bits/stdc++.h>
using namespace std;
#define ll long long
int stt=1;
class HocVien {
	public:
		string ten,lop,ns;
		string ma;
		double gpa;
		friend istream& operator >> (istream &in,HocVien &a)
		{
			scanf("\n");
			getline(cin,a.ten);
			cin>>a.lop>>a.ns>>a.gpa;
			if(a.ns[2]!='/') a.ns.insert(0,"0");
			if(a.ns[5]!='/') a.ns.insert(3,"0");
			a.ma=to_string(stt);
			while(a.ma.size()<3)
			{
				a.ma="0"+a.ma;
			}
			stt++;
			return in;
		}
		friend ostream& operator <<(ostream &out,HocVien a)
		{
			cout<<"B20DCCN"<<a.ma<<' ';
			stringstream ss(a.ten);
			string tmp;
			while(ss>>tmp)
			{
				for(int i=0;i<tmp.size();i++)
				{
					tmp[i]=tolower(tmp[i]);
				}
				tmp[0]-=32;
				cout<<tmp<<' ';
			}
			cout<<a.lop<<' '<<a.ns<<' '<<fixed<<setprecision(2)<<a.gpa<<endl;
			return out;
		}
};
int cmp(HocVien a,HocVien b)
{
	return a.gpa>b.gpa;
}
void sapxep(HocVien a[],int n)
{
	sort(a,a+n,cmp);
}
int main(){
    HocVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}