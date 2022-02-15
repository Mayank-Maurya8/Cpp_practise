#include<bits/stdc++.h>
using namespace std;

int printar(int n , int a[]){
	if(n < 0) return 0;
	return printar(n-1,a) + a[n];
}


int main(){
	int n;
	cin >> n;
	int a[n],i;
	for(i =0 ;i<n;++i){
		cin >> a[i];
	}
	cout << printar(n-1,a);

}