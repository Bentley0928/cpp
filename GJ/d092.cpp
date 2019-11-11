#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n=0;
	cin >> n;
	while(n--){
		int a[3];
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		sort(a,a+3);
		if(a[0]+a[1]>a[2]){
			cout << "1";

			if(a[0]==a[1] || a[1]==a[2]) cout << " 1\n";
			else cout << " 0\n";
		}
		else cout << "0\n";
	}
	return 0;
}
