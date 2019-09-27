#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int l,w;
    cin >> l >> w;
    int ms=max(l,w);
    for(int i=1;i<=ms;i++){
        if(l%i==0 && w%i==0){
            cout << i << ' ' << (l/i)*(w/i) << endl;
        }
    }
    return 0;
}
