#include <iostream>
using namespace std;
int main() {
    int w,h;
    cin >> h >> w;
    for (int i=0; i<w; i++) {
        for (int j=0; j<h; j++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}

