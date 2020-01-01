// http://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
using namespace std;

void getMinSwaps(int *arr, int n, int mindex, int mandex){
	// prints the minimum number of swaps required to place the
	// maximum element in the front and minimum element in the back of the array
	// steps: 1. place the max element in the first place (keep track of the index of the min element)
	// 2. then place the min element in the last place
	int swaps = 0;
	for(int i = mandex; i > 0; i--){
		if (i-1 == mindex)mindex = i;
		swap(arr[i], arr[i-1]);
		swaps++;
	}
	for(int i = mindex; i < n-1; i++){
		swap(arr[i], arr[i+1]);
		swaps++;
	}
	cout << swaps << endl;
	return ;
}

int main(){
	int n, mindex, mandex, maxheight=0, minheight=101;
	cin >> n;
	int heights[n];
	for(int i = 0; i < n; i++){
		cin >> heights[i];
		if(heights[i] > maxheight){
			mandex = i;
			maxheight = heights[i];
		} else if (heights[i] <= minheight){
			mindex = i;
			minheight = heights[i];
		}

	}
	getMinSwaps(heights, n, mindex, mandex);
	return 0;
}
