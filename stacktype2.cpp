// Next largest element to the left

#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
int arr[n];
for(int j=0;j<n;j++){
cin >> arr[j];
}

// we are using vector to store the collection of the elements which needs to be printed as the output
// we will then reverse this vector in the end to get the main output
vector<long long> v;
stack<long long> s;

for(int i=0;i<n;i++){
	if(s.empty()){
		v.push_back(-1);
	}
	else if(!s.empty() && s.top()>arr[i]){
		v.push_back(s.top());
	}
	else if(!s.empty() && s.top()<=arr[i]){
		while(!s.empty() && s.top()<=arr[i]){
			s.pop();
		}
		if(s.empty()){
			v.push_back(-1);
		}
		else
			v.push_back(s.top());
	}
	s.push(arr[i]);
}

for(int i=0;i<v.size();i++){
	cout << v[i] << " ";
}





return 0;
}