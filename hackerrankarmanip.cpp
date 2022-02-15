#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int a[N];

int main(){
	int n,q;
	cin >> n >> q;
	while(q--){
		int l,r,s;
		cin >> l>> r>>s;
		a[l] =s;
		a[r+1] =s;
	}
	for(int i=1;i<=n;i++){
		a[i] += a[i-1];
	}
	long long mx =-1;
	for(int i=1;i<=n;i++){
		if(mx<a[i]){
			mx = a[i];
		}
	}
	cout << mx<<endl;

	return 0;
}