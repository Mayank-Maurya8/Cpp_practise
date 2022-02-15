// stock span problem 

#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
int arr[n];
for(int j=0;j<n;j++){
cin >> arr[j];
}
vector <pair<int ,int>> v;
stack <pair<int,int>> s;


for(int i=0;i<n;i++){
	if(s.empty()){
		v.push_back(-)1
	}
	else if(!s.empty() && s.first.top() < arr[i]){
		v.push_back(s.second.top());
	}
	else if()
}


for(int i=0;i<n;i++){
	v[i]=i-v[i];
	cout << v[i]<<" ";
}



return 0;
}