#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--){
	    int l,r;
	    string m,res ;
	    res = "NO";
	    int i,j;
	    cin >> l >> r;
	    cin >> m;
	    i=0;
	    j=l-1;
	    while(i<=j){
	        if(m[i++]!=m[j--]){
	            r-=1;
	        }
	    }
	    if(r>=0)
	    	res="YES";
	    cout << res << endl;
	    
	    
	}
	return 0;
}