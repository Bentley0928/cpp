#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    switch(b)
    {
        case 2:
        case 5:
        case 8:
            cout<<200;
            break;
        default:
            switch(a)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 9:
                cout<<100;
                break;
            default:
                if(a==b)
                    cout<<50;
                else
                    cout<<0;
                break;
        }
            break;
    }
    return 0;
}
