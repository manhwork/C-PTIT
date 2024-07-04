#include <iostream>
#include <math.h>
#include <stdbool.h>
using namespace std;
bool prime(int a){
    if(a < 2)return false;
    for(int i = 2; i <= sqrt(a); ++i)
    {
        if(a % i == 0)return false;
    }
    return true;
}
int gcd(int a, int b){
    while(b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int dem = 1;
        for(int i = 2; i < x; ++i)
        {
            if(gcd(i,x) == 1)dem++;
        }
        if(prime(dem))cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}