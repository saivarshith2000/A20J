// http://codeforces.com/problemset/problem/165/A
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	pair <int, int> points[n];
	int x,y, count=0;
	int top, bottom, left, right;
	for(int i = 0; i < n; i++){
		cin >> points[i].first;
		cin >> points[i].second;
	}
	for(int i = 0; i < n; i++){
		// find the neighbours of this point (x,y)
		x = points[i].first;
		y = points[i].second;
		top = bottom = left = right = 0;
		for(int j = 0; j < n ; j++){
			if (i == j)continue;
			if (x == points[j].first){
				// check along Y-axix (top, bottom)
				if (y > points[j].second)bottom = 1;
				else top = 1;
			} else if (y == points[j].second){
				// check along X-axix (left, right)
				if (x > points[j].first)right = 1;
				else left = 1;
			}
		}
		if (top + bottom + left + right == 4)count++;
	}
	cout << count << endl;
	return 0;
}
