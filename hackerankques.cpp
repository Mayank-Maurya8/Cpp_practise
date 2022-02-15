// need to first take a hash map to map all the characters then i will increment ever time
// it comes in a bunch 
// //abccddde
// 6
// 1
// 3
// 12
// 5
// 9
// 10

#include<bits/stdc++.h>
using namespace std;
const int N =1e7 +10;
int b[N];

int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	int a[n],hsh[26];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=26;i++){
		hsh[i] = 0;
	}
	for(int i=0;i<s.size();i++){
		hsh[s[i] - 'a' +1]++ ;
	}
	for(int i=1;i<=26;i++){
		for(int j=1;j<=hsh[i];j++){
			b[j] = 
		}
	}
	// for(int i=1;i<=26;i++){
	// 	cout << hsh[i] << endl;
	// }
	for(int i=1;i<=n;i++){
		for(int j=1;j<=26;j++){
			if(a[i] == b[j]){
				cout << "Yes\n";
			}
			else if ((a[i] != hsh[j])&& hsh[j] == 0){
				printf("No\n") ;
			}
		}

	}

	return 0;
}