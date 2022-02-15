#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int a;
	a = s.size();
	int shifts[a],b[a];
	for( int i = 0;i<a;i++){
		cin >> shifts[i];
	}
	string result;
	 auto times = accumulate(shifts.begin(), shifts.end(), 0L) % 26;
        for (int i = 0; i < s.length(); ++i) {
            result.push_back('a' + (s[i] - 'a' + times) % 26);
            times = ((times - shifts[i]) % 26 + 26) % 26;
        }
	cout << result;

	return 0;
}