#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if (num<10)
        cout << "|_______" << num << "|" << endl;
    else if(num<100)
        cout << "|______" << num << "|" << endl;
    else if (num<1000)
        cout << "|_____" << num << "|" << endl;
    else
        cout << "|____" << (num%10000)/1000 << (num%1000)/100 << (num%100)/10 << (num%10)/1 << "|" << endl;
    return 0;
}
