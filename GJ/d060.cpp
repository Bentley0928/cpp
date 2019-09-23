#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	int t;
	string s;
	cin >> t;
	getline(cin,s);
	int n=t;
	while (n--){
		int hz;
		stringstream ssin;
		getline(cin,s);
		ssin.clear();
		ssin.str(s);
		double x[20],v[20],ss[20],a[20];//ss位移v速度a加速度
		int ii=0;
		ssin >> hz; 
		while(1){
			ssin >> x[ii];
			if(ssin.fail()) break;
			ii++;	
		}
		cout << "實驗" << t-n << '\n' << "位置";
		for(int i=0;i<ii;i++){
			cout << ' ' << x[i];
		}
		cout << "\n位移 0";
		for(int i=0;i<ii-1;i++){
			ss[i]=x[i+1]-x[i];
			cout << ' ' << ss[i];
		}
		cout << "\n平均速度 x";
		for(int i=0;i<ii-1;i++){
			v[i]=(ss[i])*hz;
			cout << ' ' << v[i];
		}
		cout << "\n加速度 x x";
		for(int i=0;i<ii-2;i++){
			a[i]=(v[1]-v[0])*hz;
			cout << ' ' << a[i];
		}
		cout << "\n運動類型 ";
		if(a[0]==0){
			if(v[0]==0) cout << "靜止\n加速度 0\n速度 0\n";
			else cout << "等速運動\n加速度 0\n速度 " << v[0] << '\n';
		}
		else{
			if(a[0]>0) cout << "等正加速度運動\n加速度 " << a[0] << "\n速度 x\n";
			else cout << "等負加速度運動\n加速度 " << a[0] << "\n速度 x\n";
		}
	}
	return 0;
}