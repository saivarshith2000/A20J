// http://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
	int amazing = 0;
	cin >> temp;
	int worst,best;
	worst = best = temp;
	for(int i = 1; i < n; i++){
		cin >> temp;
		if (temp > best){amazing++; best = temp;}
		else if (temp < worst){amazing++; worst = temp;}
	}
	cout << amazing << endl;
	return 0;
}
