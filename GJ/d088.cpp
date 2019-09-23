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
	int j=0,sum=0;
	if(flag){
		for(int i=0;i<n-1;i++){
			int a,b,c;
			a=ss[j]-'0';
			j++;
			b=ss[j]-'0';
			j++;
			c=ss[j]-'0';
			j++;
			if(c%2==1) sum+=c*100+b*10+a;
			else sum+=a*100+b*10+c;
		}
		if(siz-j == 2){
			int a=(ss[siz-2]-'0'),b=(ss[siz-1]-'0');
			if(b%2==1) sum+=b*10+a;
			else sum+=a*10+b;
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
			if(c%2==1) sum+=c*100+b*10+a;
			else sum+=a*100+b*10+c;
		}
	}
	//cout << sum << endl;
	return 0;
}