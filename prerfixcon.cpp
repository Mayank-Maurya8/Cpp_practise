#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int pf[N];

int main(){
	int n;
	cin >> n;
	int i;
	for (i =1;i<=n;i++){
		cin >> a[i];
		pf[i]=pf[i-1]+a[i];
	}

	int q;
	int l,r;
	cin >>q;
	while (q--){
		cin >>l >> r;
		cout << pf[r] -pf[l-1]<<endl;
	}


	return 0;
}