// http://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0, temp;
	for(int i = 0; i < n; i++){cin >> temp; sum += temp;}
	cout << 100 * (1.0 * sum)/(100*n) << endl;
}
