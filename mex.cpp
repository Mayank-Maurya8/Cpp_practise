#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m=0;
	cin >> n;
	while(n){
		--n;
		m = m|n;
		cout << m << " ";
		--n;
	}

	cout << endl << m;
	return 0;
}