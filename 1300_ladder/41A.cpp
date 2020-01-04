// http://codeforces.com/problemset/problem/41/A
#include <iostream>
using namespace std;

int main(){
	string orig, trans;
	cin >> orig;
	cin >> trans;
	for(int i = 0; i < orig.size(); i++){
		if(orig[i] != trans[orig.size()-i-1]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
