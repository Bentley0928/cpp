#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum=0;
	for(int i=1;i<=n;i++){
		int tmp;
		cin >> tmp;
		sum+=tmp*i;
	}
	cout << sum << endl;
	return 0;
}
