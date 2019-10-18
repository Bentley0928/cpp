#include <iostream>
using namespace std;
int main() {
    int a,b,n;
    cin >> n;
for(int i=0; i<n; i++){
    cin >> a >> b;
    cout << "Case "<< i+1 << ": ";
    if (a>b) {
        cout << "A " << a-b << endl;
    }
    else if (a<b)
        cout << "B " << b-a << endl;
    else
        cout << "0" << endl;
    }
    return 0;
}
