#include <iostream>
using namespace std;
int main() {
    int a,b=0;
    cin >> a;
    while (a/10!=0) {
        b+=a%10;
        a/=10;
    }
    b+=a;
    cout << b << endl;
    return 0;
}
