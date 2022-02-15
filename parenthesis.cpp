#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void parent(string &s, int open , int close){
	if (open == 0 && close == 0){
		v.push_back(s);
		return;
	}
	if(open > 0){
		s.push_back('(');
		parent(s,open-1,close);
		s.pop_back();
	}
	if(close > 0){
		if(open < close){
			s.push_back(')');
			parent(s,open,close-1);
		}
	}

}

int main(){
	int n;
	cin >> n;
	string s;

	parent(s,n,n);

	for(auto e:v){
		cout << e << endl;
	}

	return 0;
}