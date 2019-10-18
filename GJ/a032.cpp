#include<iostream>
#include<string>
using namespace std;
main(){
    int a,b;
    char x;
    cin>>a>>x>>b;
    cout<<(a+b)*(x =='+')+(a*b)*(x =='*')+(a-b)*(x =='-');
    return 0;
}
