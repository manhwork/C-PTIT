#include <iostream>
using namespace std;

struct NhanVien {
    string ten, gt, ns, dc, ms, hd;
};

void nhap(NhanVien &a) {
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.ms >> a.hd;
}

void inds(NhanVien a[], int N) {
    for (int i = 0; i < N; i++) {
    	if(i>8) cout<<"000";
    	else cout<<"0000";
        cout <<i+1<<" "<< a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].ms << " " << a[i].hd;
        if (i != N - 1) cout << endl;
    }
}

int main() {
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}
