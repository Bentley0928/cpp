#include <iostream>
using namespace std;
int main()
{
    int a,b,money=0;
    cin>>a>>b;
    switch(b)
    {
        case 2:
        case 5:
        case 8:
            money+=200;
            break;
    }
    switch(a){
            case 1:
            case 3:
            case 5:
            case 7:
            case 9:
                money+=100;
                break;
    }
                if(a==b)
                    money+=50;
    cout << money;
    cout << endl;
    return 0;
}
