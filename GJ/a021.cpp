#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    while (n%2==0) {
      n/=2;
    }
    cout << n << endl;
    return 0;
}

