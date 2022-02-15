#include<bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
int a[n];
// int pf[n]

int main(){
	int o;
	cin >> o;
	int i;
	for (i =1;i<=o;i++){
		cin >> a[i];
	}

	int q;
	int l,r;
	cin >>q;
	while (q--){
		long long  sum =0;
		cin >>l >> r;
		for(int j =l;j<=r;l++){
			sum += a[j];
		}
		cout << sum << endl;
	}


	return 0;
}