#include <iostream>
using namespace std;
int main() {
    int a=0;
    int b=0;
    int c=0;
    int ans=0;
    cin >> a;
    b=a/11;
    c=a%11;
    ans=b*1000+c*100;
    cout << ans;
    return 0;
}
