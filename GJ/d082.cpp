#include <iostream>
#include <string>
using namespace std;
void output(bool che,string tt){
	if(che) cout << tt;
	else{
		int sizz=tt.size();
		for(int i=0;i<sizz;i++){
			cout << tt[sizz-i-1];
		}
	}
	cout << ',';
}
int main(){
	string s,ss;
	cin >> s;
	int siz=s.size();
	bool flag=1;
	cout << '{';
	string tmp;
	for(int i=0;i<siz;i++){
		if(s[i]=='{'){
			tmp.clear();
			continue;
		} 
		tmp.push_back(s[i]);
		if(s[i]>'Z'){
			flag=0;//不用翻轉
		}
		else if(s[i]==','){
			output(flag,tmp);
			tmp.clear();
		}
		else if(s[i]=='}'){
			output(flag,tmp);
			cout << '}';
		}
	}
	return 0;
}