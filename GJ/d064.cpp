#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
string s[3];
const int INF = 1e9;
int maxnow=-INF;
string tmp = "";
bool used[3];
int aa[3];
int stoii(string s){
	int siz=s.size();
	int sum=0;
	for(int i=0;i<siz;i++){
		sum+=(s[i]-'0')*pow(10,siz-i-1);
	}
	//cerr << sum << endl;
	return sum;
}
void cacul(int a){
	if(a==3){
		for(int i=0;i<3;i++){
			tmp+=s[aa[i]-1];
		}
		int tmpnum=stoii(tmp);
		maxnow=max(maxnow,tmpnum);
		tmp.clear();
	}
	for(int i=1;i<=3;i++){
		//strtmp+=s[i];
		if(used[i]) continue;
		else aa[a]=i;
		used[i]=1;
		cacul(a+1);
		used[i]=0;
	}
}
int main(){
	for(int i=0;i<3;i++){
		cin >> s[i];
	}
	cacul(0);
	cout << maxnow << endl;
}