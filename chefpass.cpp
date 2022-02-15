#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t){
		int n,x,p;
		cin >> n >> x >> p;

		int m = 4*x - n;

		if(m >= p){
			cout << "PASS\n";
		}
		else{
			cout << "FAIL\n";
		}
		--t;
	}

	return 0;
}