// http://codeforces.com/problemset/problem/275/A
#include <bits/stdc++.h>
using namespace std;

// a padding of 1 light is added around the lightboard to eliminate edge cases

int lights[5][5] = {
	{1,1,1,1,1},
	{1,1,1,1,1},
	{1,1,1,1,1},
	{1,1,1,1,1},
	{1,1,1,1,1}
};

void toggle(int x, int y){
	x++;
	y++;
	lights[x][y] = !lights[x][y];
	lights[x-1][y] = !lights[x-1][y];
	lights[x][y-1] = !lights[x][y-1];
	lights[x+1][y] = !lights[x+1][y];
	lights[x][y+1] = !lights[x][y+1];
}

int main(){
	int counts[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> counts[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for(int k = 0; k < counts[i][j]; k++)toggle(i,j);
		}
	}
	for(int i = 1; i < 4; i++){
		for (int j = 1; j < 4; j ++){
			cout << lights[i][j];
		}
		cout << endl;
	}
	return 0;
}
