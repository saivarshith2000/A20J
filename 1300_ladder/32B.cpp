// http://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
using namespace std;

int main(){
	string code;
	cin >> code;
	int index = 0;
	while (index < code.length()){
		if (code[index] == '.'){
			cout << 0;
			index ++;
		} else {
			if (code[index+1] == '.'){
			    cout << 1;
				index += 2;
			} else {
			    cout << 2;
				index += 2;
			}
		}
    }
    cout << endl;
	return 0;
}
