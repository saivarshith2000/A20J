#include <iostream>
using namespace std;

int main(){
	// this is stupid simple, why am i doing this ??
	int total;
	int pages[7];
	cin >> total;
	for(int i = 0 ; i < 7; i++)cin >> pages[i];
	int i = 0;
	while(1){
		if(total <= 0)break;
		if (i == 7)i = 0;
		total -= pages[i];
		i++;
	}
	cout << i << endl;
}
