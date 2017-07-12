#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
#define pii pair<int,int>
#define F first
#define S second


vector<pii> factors[MAX]; // array of vectors of pairs

void sieveOfEratothenese(){
	
	bool isPrime[MAX];
	
	memset(isPrime, true, sizeof(isPrime)); // filling all the values with true
	
	isPrime[0]=isPrime[1]=false;
	
	for(int i = 2 ; i < MAX; i++){
		for(int j = i; j< MAX; j++){
			
			isPrime[j]=false;
			int k,l;
			
			for(k=j, l=0;k%i==0;k/=i,l++);
			
			factors[j].push_back(make_pair(i,k));
		}
		
		
	}
	
	
}


int sumOfProperDivisor(int num){
	int mul=1;
	for(int i= 0 ;i<factors[num].size();i++){
		mul *= (pow(factors[num][i].F,factors[num][i].S)-1)/(factors[num][i].F-1);
		
		
		
	}
	
	return mul;
	
	
	
	
	
		
}

int main(){
	
	
	sieveOfEratothenese();
	int arr[]={8,13,24,36,59,75,91};
	
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<sumOfProperDivisor(arr[i])<<endl;
		
	}
	
	
	return 0;
}
