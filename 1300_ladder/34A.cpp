// http://codeforces.com/problemset/problem/34/A
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int heights[n];
	for(int i = 0; i < n; i++){
		cin>>heights[i];
	}
	int minHeight=1001, minIndex_a, minIndex_b, diff;
	for(int i= 0; i < n-1; i++){
		diff = abs(heights[i] - heights[i+1]);
		if (diff < minHeight){
			minHeight = diff;
			minIndex_a = i;
			minIndex_b = i+1;
		}
	}
	diff = abs(heights[n-1]-heights[0]);
	if (diff < minHeight){
		minHeight = diff;
		minIndex_a = n-1;
		minIndex_b = 0;
	}
	cout << 1+minIndex_a << " " << 1+minIndex_b << endl;
	return 0;
}
