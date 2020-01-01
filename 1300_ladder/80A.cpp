// http://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;

int isPrime(int a){
	// returns true if a is a prime
	for(int i = 2; i <= sqrt(a); i++){
		if (a%i == 0){
			return 0;
		}
	}
	return 1;
}

int getNextPrime(int n){
	// returns the next prime number after n
	n++;
	while(1){
		if(isPrime(n))return n;
		n++;
	}
}

int main(){
	int m,n;
	cin >> n;
	cin >> m;
	if (m == getNextPrime(n)){
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << endl;
	return 0;
}
