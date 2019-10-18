#include <iostream>
using namespace std;
int main() {
    int h,m;
    cin >> h >> m;
    switch (h) {
        case 8:case 9:case 10:case 11:case 13:case 14:case 15:case 16:
            if (m>=0 && m<10)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            break;
        case 12:
            if (m>=0 && m<30)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            break;
        case 7:
            if (m>=30 && m<=59)
                cout << "YES" << endl;
            else
                cout << "XXX" << endl;
            break;
        default:
            cout << "XXX" << endl;
            break;
    }
        return 0;
}
