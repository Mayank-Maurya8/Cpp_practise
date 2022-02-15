#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		
		if(a+b+c <=d){
			cout << "1\n";
		}
		else if((a+b <=d)||(c+a<=d)){
			cout << "2\n";
		}
		else {
			cout << "3\n";
		}

		--n;
	}


	return 0;
}