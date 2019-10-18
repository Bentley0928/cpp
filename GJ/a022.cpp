#include <iostream>
using namespace std;
int main() {
    int a=0;
    int b=0;
    int c=0;
    cin >> a;
    cin >> b;
    while (a<b) {
        a*=3;
        c++;
    }
    cout << c << endl;
    return 0;
}
