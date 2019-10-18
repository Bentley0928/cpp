#include <iostream>
using namespace std;
int main() {
    int ans=0;
    int a=0;
    int b=0;
    cin >> a >> b;
    for (int i=a; i<b; i++) {
        ans=ans+i;
        cout << i << "+";
    }
    ans+=b;
    cout << b << "=" << ans << endl;
    return 0;
}
