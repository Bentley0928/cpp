#include <iostream>
using namespace std;
int main() {
    int ans=1;
    int n=0;
    int r=0;
    cin >> n >> r;
    for (int i=n;i>=(n-r+1); i--) {
        ans*=i;
    }
    cout << ans << endl;
    return 0;
}
