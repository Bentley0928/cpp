#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(cin >> s){
		for(auto i=0;i<6;i++){
			cout << abs(s[i+1]-s[i]);
		}
		cout << '\n';
	}
	return 0;
}
