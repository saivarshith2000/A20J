/* http://codeforces.com/problemset/problem/248/A */
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int left[n], right[n];
	int leftOpen=0,leftClose=0,rightOpen=0,rightClose=0;
	for(int i = 0; i < n; i++){
		cin >> left[i];
		cin >> right[i];
		if (left[i])leftOpen += 1;
		else leftClose +=1;
		if (right[i])rightOpen += 1;
		else rightClose +=1;
	}
	int minCount = 0;
	if (leftOpen > leftClose)minCount += leftClose;
	else minCount += leftOpen;
	if (rightOpen > rightClose)minCount += rightClose;
	else minCount += rightOpen;
	cout << minCount << endl;
}
