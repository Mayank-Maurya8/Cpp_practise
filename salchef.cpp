#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t){
		int x,y;
		string s;
		cin >> x >> y >> s;
		
		int c =0;
		c = count(s.begin(),s.end(),'1');
		c = c *x;
		int streak = 0, longstreak = 0;
		for(auto i : s){
			if((i == '1')){
				streak++;
			}
			else{
				streak = 0;
			}
			if(longstreak < streak){
				longstreak = streak;
			}

		}
		longstreak = longstreak*y;
		cout << longstreak+c <<"\n";
		--t;
	}
	return 0;

}