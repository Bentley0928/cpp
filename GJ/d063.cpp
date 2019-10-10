#include <iostream>
using namespace std;
int main(){
	int h1,h2,m1,m2,s1,s2;
	string s;
	cin >> s;
	h1=(s[0]-'0')*10+(s[1]-'0');
	m1=(s[3]-'0')*10+(s[4]-'0');
	s1=(s[6]-'0')*10+(s[7]-'0');
	s.clear();
	cin >> s;
	h2=(s[0]-'0')*10+(s[1]-'0');
	m2=(s[3]-'0')*10+(s[4]-'0');
	s2=(s[6]-'0')*10+(s[7]-'0');
	int a,b,c;
	bool check=0;
	if(h2-h1<0) check=0;
	else check=1;
	a=h2-h1;
	b=m2-m1;
	c=s2-s1;
	if(a<0){
		a+=24;
	}
	if(c<0){
		b--;
		c+=60;
	}
	if(b<0){
		a-=1;
		b+=60;
	}
	if(a<10){
		cout << '0' << a;
	}
	else cout << a;
	cout << ':';
	if(b<10){
		cout << '0' << b;
	}
	else cout << b;
	cout << ':';
	if(c<10){
		cout << '0' << c;
	}
	else cout << c;
	cout << endl;
	return 0;
}