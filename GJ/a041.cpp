#include <iostream>
using namespace std;
int main() {
    int ice,sum=0,surplus=0;
    cin >> ice;
       while (ice!=0) {
           sum+=ice;
           ice+=surplus;
           surplus=ice%5;
           ice/=5;
               }
    cout << sum << endl;

    return 0;
}
