// Next largest element or the next largest element to the right

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

// storing the right array in such a way that only the number greater than the array element is found


// there will be three conditions ,

for(int i=n-1;i>=0;i--){
//first to check if the right array is present or not
	if(s.size() == 0){
		v.push_back(-1);
	}
	// else if there is an element greater then pop it from the stack
	else if (s.size() > 0 && s.top() > arr[i]){
		v.push_back(s.top());
	}
	// else keep on poping till end is not found or a greater number

	else if (s.size() > 0 && s.top() <= arr[i]){
	//now we will see if the element in stack still smaller than the arr element
		while(s.size() > 0 && s.top()<=arr[i]){
			s.pop();
		}
		if(s.size() < 0){
			v.push_back(-1);
		}
		else{
			v.push_back(s.top());
		}
	}
	s.push(arr[i]);
}

reverse(v.begin(),v.end());

for(int i =0;i<v.size();i++){
cout << v[i] << " ";
}


return 0;
}