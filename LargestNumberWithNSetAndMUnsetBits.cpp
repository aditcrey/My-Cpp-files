// Largest decimal number with n set and m unset bits

#include<bits/stdc++.h>

using namespace std;



unsigned int toggleLastMBits(unsigned int n, unsigned int m){
	if(m == 0) return n;
	
	unsigned int num = (1<<m)-1;
	
	return (n^num);
	
	
}


unsigned int largeNumWithNSetAndMUnsetBits(unsigned int n, unsigned int m){
	
	unsigned int num = (1<<(n+m)) - 1; // num with all n+m set bits
	
	return toggleLastMBits(num, m);
	
	
	
	
	
	
	
}

int main(){
	
	unsigned int n=2, m=2;
	cout<<"The number is: "<<largeNumWithNSetAndMUnsetBits(n,m);
	
	
	return 0;
}
