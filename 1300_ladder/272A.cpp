// https://codeforces.com/problemset/problem/272/A
#include <iostream>
using namespace std;

int main(){
	int n, sum = 0, temp, ways = 0;
	cin >> n;
	for(int i = 0; i < n; i++){cin >> temp; sum += temp;}
	for(int i = 1; i < 6; i++){
		if ((i+sum)%(n+1) != 1)ways++;
	}
	cout << ways << endl;
	return 0;
}
