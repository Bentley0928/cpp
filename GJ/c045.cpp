#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a1,a2,b1,b2,c;
    cin >> a1 >> a2 >> c >> b1 >> b2;
    cout << min(min(min(b1+c+a2,b1+b2),a1+c+b2),a1+a2) << endl;
    return 0;
}
//a1+a2
//a1+c+b2
//b1+c+a2
//b1+b2
