#include <iostream>
using namespace std;
int main() {
    int n=0;
    int m=0;
    int l=0;
    cin >> n >> m >> l;
    if (n <= m && n <= l) {
        cout << n << endl;
    }
    else if (m <= n && m <=l)
        cout << m << endl;
    else
        cout << l << endl;
    return 0;
}
