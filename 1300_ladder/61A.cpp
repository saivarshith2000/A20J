// http://codeforces.com/problemset/problem/61/A
#include <iostream>
using namespace std;

void _xor(string a, string b){
	for(int i = 0; i < a.size(); i++){
		if (a[i] != b[i])cout << 1;
		else cout << 0;
	}
	cout << endl;
	return ;
}

int main(){
	string a,b;
	cin >> a;
	cin >> b;
	_xor(a, b);
	return 0;
}
