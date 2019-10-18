#include <iostream>
using namespace std;
int main() {
    int hour=0;
    int min=0;
    int time=0;
    cin >> hour >> min;
    time=hour*60+min;
    if (time>=860&&time<=1000) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
