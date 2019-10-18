#include <iostream>
using namespace std;
int main() {
    int a,b,sum;
    cin >> a >> b;
    if (b>a) {
        sum=b;
        b=a;
        a=sum;
        sum=0;
    }
    while (a%b!=0) {
        sum=a%b;
        a=b;
        b=sum;
    }
    cout << b << endl;
    return 0;
}
