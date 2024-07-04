#include<bits/stdc++.h>
using namespace std;
int main() {
	int i;
	cin >> i;
	while(i--) 
	{
		int n,k;
		cin >> n >> k;
		int a[n];
		int pos = -1;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) 
		{
			if(a[i] == k) 
			{
				pos = i+1;
				break;
			}
		}
		cout << pos << endl;
	}
	return 0;
}

