#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >>q;
		int a[n+10];
		int forw[n+10];
		int back[n+10];
		forw[0] = back[n+1] =0;
		for(int i1=;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<=n;i++){
			forw[i] = __gcd(forw[i-1],a[i]);
		}
		for(int i=n;i>=1;i--){
			back[i] = __gcd(back[i+1],a[i]);
		}
		while(q--){
			int l,r;
			cin >> l>>r;
			cout << __gcd(forw[l-1],back[r+1]) << endl;
		}

	}


	return 0;
}