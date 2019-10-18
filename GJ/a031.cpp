#include <iostream>
using namespace std;
int main() {
    long long int a=0;
    long long int b=0;
    cin >> a >> b;
    if (a>b) {
        cout << "A" << " ";
    }
    else{
        cout << "B" << " ";
    }
    cout << a+b;
    return 0;
}
