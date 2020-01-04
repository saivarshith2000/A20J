// http://codeforces.com/problemset/problem/43/A
#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	cin >> n;
	string team;
	map<string,int> dict;
	for(int i = 0; i < n; i++){
		cin >> team;
		if(dict.find(team) == dict.end()){
			dict.insert(pair<string,int>(team,1));
		} else {
			dict[team] += 1;
		}
	}
	int max = 0;
	string max_team = "";
	for ( const auto &p : dict ){
		if (p.second > max){
			max = p.second;
			max_team = p.first;
		}
	} 
	cout << max_team << endl;
	return 0;
}
