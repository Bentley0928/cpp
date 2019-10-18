#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    if (a>b) {
        cout << "A" << " " << a-b;
    }
    else if (b>a)
        cout << "B" << " " << b-a;
    else
        cout << "0";
    return 0;
}
