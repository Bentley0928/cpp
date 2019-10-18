#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin >> n;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            sum+=i;
        }
    }
    if (n<sum)
        cout << "Abundant" << endl;
    else if (n==sum)
        cout << "Perfect" << endl;
    else
        cout << "Deficient" << endl;
    return 0;
}

