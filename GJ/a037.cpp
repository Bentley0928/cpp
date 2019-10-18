#include <iostream>
using namespace std;
int main() {
    int n;
    int a[10];
    int b[10];
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i=0; i<n; i++) {
        if (a[i]>b[i]) {
            cout << "A " << a[i]-b[i] << endl;
        }
        else if(a[i]<b[i]){
            cout << "B " << b[i]-a[i] << endl;
        }
        else if (a[i]==b[i]){
            cout << "0" << endl;
        }
    }

    return 0;
}
