// http://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;

int hasdistinct(int a){
		// returns 1 if the number a has distinct integers
		int ones = a%10;
		a = a/10;
		int tenths = a%10;
		a = a/10;
		int hundreths= a%10;
		a = a/10;
		int thous = a;
		if (ones == tenths || ones == hundreths || ones == thous || tenths == hundreths || tenths == thous || hundreths == thous)return 0;
		return 1;
}

int main(){
		int year;
		cin >> year;
		for (int i = year+1; ; i++){
				if (hasdistinct(i)){
						cout << i << endl;
						break;
				}
		}
		return 0;
}
