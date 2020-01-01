// http://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cin >> input;
	int caps = 0, smalls = 0;
	for(int i = 0; i < input.size(); i++){
		if (isupper(input[i]))caps++;
		else smalls++;
	}
	for(int i = 0; i < input.size(); i++){
		if (smalls >= caps){
			input[i] = tolower(input[i]);
		} else {
			input[i] = toupper(input[i]);
		}
	}
	cout << input << endl;
	return 0;
}
