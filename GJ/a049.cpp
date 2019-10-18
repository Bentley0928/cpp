#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    for (int x=0; x<n; x++) {
        switch (x%3) {
            case 0 :
                for (int i=0; i<n; i++) {
                    if (i%3==0)
                        cout << "@";
                    else
                        cout << "-";
                }
                cout << endl;
                break;
            case 1 :
                for (int j=0; j<n; j++) {
                    if (j%3==1)
                        cout << "@";
                    else
                        cout << "-";
                }
                cout << endl;
                break;
            case 2 :
                for (int k=0; k<n; k++) {
                    if (k%3==2)
                        cout << "@";
                    else
                        cout << "-";
                }
                cout << endl;
                break;
            default:
                break;
        }

            }
    return 0;
}
