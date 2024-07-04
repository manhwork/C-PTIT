#include<bits/stdc++.h>
using namespace std;
int stt=1;
class SinhVien {
	public :
		string ten,lop,ns;
		double gpa;
//		int stt=1;
		friend istream& operator >>(istream &in,SinhVien &a)
		{
			cin.ignore();
			getline(in,a.ten);
			cin>>a.lop>>a.ns>>a.gpa;
			if(a.ns[2]!='/') a.ns.insert(0,"0");
			if(a.ns[5]!='/') a.ns.insert(5,"0");
			return in;
		}
		friend ostream& operator <<(ostream &out,SinhVien a)
		{
			out<<"B20DCCN";
			string s=to_string(stt);
			while(s.size()<3){
				s="0"+s;
			}
			
			out<<s<<' '<<a.ten<<' '<<a.lop<<' '<<a.ns<<' '<<fixed<<setprecision(2)<<a.gpa<<endl;
			stt++;
			return out;
		}
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}