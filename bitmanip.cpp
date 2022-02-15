// // # bit manipulation technique to find the one unique number when other element present in the 
// // array are present twice

// #include<bits/stdc++.h>
// using namespace std;

// int bitmanip(int a[], int n){
// 	int xors = 0;
// 	for(int i=0;i<n;++i){
// 		xors = xors^a[i];
// 		cout << xors << endl ;
// 	}
// 	return xors;
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	int ar[n];
// 	for(int i=0;i<n;++i){
// 		cin >> ar[i];
// 	}
// 	cout << bitmanip(ar,n) << endl;


// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int setBit(int a[],int pos){
	return (!a=0)
}

void bitmanip(int a[], int n){
	int xors = 0;
	for(int i=0;i<n;++i){
		xors = xors^a[i];
		cout << xors << endl ;
	}
	int setbit = 0;
	int pos =0;
	while (setbit !=0){
		setbit =  xors & 1;
		pos++;
		xors = xors >> 1;
	}
	for(int i =0 ; i<n;++i){
		if(setBit(a[i],pos-1));
	}
}

int main(){
	int n;
	cin >> n;
	int ar[n];
	for(int i=0;i<n;++i){
		cin >> ar[i];
	}
	cout << bitmanip(ar,n) << endl;


	return 0;
}