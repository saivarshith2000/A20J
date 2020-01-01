// http://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x,y,z, xsum = 0, ysum = 0, zsum = 0;
	for(int i = 0; i < n; i++){
		cin >> x;
		xsum +=x ;
		cin >> y;
		ysum +=y ;
		cin >> z;
		zsum +=z ;
	}
	if (xsum == 0 && ysum == 0 && zsum == 0){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
