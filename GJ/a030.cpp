#include <iostream>
using namespace std;
int main() {
    int a,b,ans=0;
    cin >> a >> b;
    if (a<b) {
        for (int i=a; i<b; i++) {
            ans=ans+i;
            cout << i << "+";
        }
        ans+=b;
    }
        else{
            for (int j=a; j>b; j--) {
                ans=ans+j;
                cout << j << "+";
            }
            ans+=b;
    }
    cout << b << "=" << ans << endl;
    return 0;
}

