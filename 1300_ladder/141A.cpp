// http://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	map<char,int> counts;
	for(int i = 0; i < a.size(); i++){
		if (counts.find(a[i]) != counts.end()){
			counts.insert(pair<char,int>(a[i], 0));
		}
		counts[a[i]]++;
	}
	for(int i = 0; i < b.size(); i++){
		if (counts.find(b[i]) != counts.end()){
			counts.insert(pair<char,int>(b[i], 0));
		}
		counts[b[i]]++;
	}
	for(int i = 0; i < c.size(); i++){
		if (counts.find(c[i]) == counts.end() || counts[c[i]] == 0){
			cout << "NO" << endl;
			return 0;
		} else {
			counts[c[i]]--;
		}
	}
	for(int i = 0; i < c.size(); i++){
		if (counts[c[i]] != 0){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
