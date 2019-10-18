#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int j=0; j<=n; j++) {
    for (int i=0; i<j; i++) {
        cout << j;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
