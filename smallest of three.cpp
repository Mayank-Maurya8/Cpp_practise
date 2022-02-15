#include<bits/stdc++.h>
using namespace std;

int main (){
	int a,b,c;
	cout << a <<b<<c;
	int min ;
	min = a;
	if(min < b ? b < c : a<c){
		min = b;
	}
	else  {
		min = c;
	}
	printf("%d",min);
	return 0;
}