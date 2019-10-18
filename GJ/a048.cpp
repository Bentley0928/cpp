#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {
		for (int j=n-i; j>0; j--) {
			cout << "_";
		}
		for (int k=1; k<=2*i-1; k++) {
			cout << i;
		}
		cout << endl;
	}

	return 0;
}
