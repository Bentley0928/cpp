#include <iostream>
#include <string>
using namespace std;
int main(){
    string ss;
    cin >> ss;
    int siz=ss.length();
    int n;
    bool flag=0;
    if(siz%3==0){
        n=siz/3;
        flag = 0;
    }
    else{
        n=(siz/3)+1;
        flag = 1;
    }
    int j=0,sum=0,k=1;
    if(flag){
        for(int i=0;i<n-1;i++){
            int a,b,c;
            a=ss[j]-'0';
            j++;
            b=ss[j]-'0';
            j++;
            c=ss[j]-'0';
            j++;
            //cout << a << b << c << endl;
            if(k%2==0) sum+=c*100+b*10+a;
            else sum+=a*100+b*10+c;
            k++;
            //cerr << sum << "!!";
        }
        if(siz-j == 2){
            int a=(ss[siz-2]-'0'),b=(ss[siz-1]-'0');
            if(k%2==0) sum+=b*10+a;
            else sum+=a*10+b;
            //cout << a << b << endl;
        }
        else sum+=(ss[siz-1]-'0');
    }
    else{
        for(int i=0;i<n;i++){
            int a,b,c;
            a=ss[j]-'0';
            j++;
            b=ss[j]-'0';
            j++;
            c=ss[j]-'0';
            j++;
            if(k%2==0) sum+=c*100+b*10+a;
            else sum+=a*100+b*10+c;
            k++;
        }
    }
    cout << sum%997 << endl;
    return 0;
}  
