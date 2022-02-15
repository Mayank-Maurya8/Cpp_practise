#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    string s;
	    cin >> s;
	    int ccount=0;
	    int chcount=0;
	    int ans=0;
	    for (int i=0;i<s.length();i++){
	        switch(s[i]){
	        	case 'C': ccount +=2;
	        	break;
	        	case 'N' : chcount +=2;
	        	break;
	        	case 'D' :ccount+=1;chcount+=1;
	        	break;
	        }
	    }
	    cout << ccount << "'"<<chcount << endl;
	    if(ccount == chcount){
	        ans=55*x;
	        cout << ans << endl;
	    }
	    else if(ccount > chcount){
	        ans=60*x;
	        cout << ans << endl;
	    }
	    else{
	        ans = 40*x;
	        cout << ans <<endl;
	    }
	}
	return 0;
}
