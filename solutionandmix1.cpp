#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		int a,b;
		cin >> a >> b;
		if(a>0 && b>0){
			cout << "Solution";
		}
		else if(a==0){
			cout << "Liquid";
		}
		else{
			cout << "Solid";
		}
		cout << endl;
		--n;
	}

	return 0; 
} 