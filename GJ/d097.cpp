#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
double nums[20],nums2[20],ans;
int chcount[4],ncount=0,sum=0,put[19]={0},put2[19];
char ch[5]="+-*/";
double cacusum(){
	nums2[0]=nums[0];
	int j=1;
	for(int i=1;i<ncount;i++){
		if(put[i-1]==2){
			nums2[j-1]=nums2[j-1]*nums[i];
		}
		else if(put[i-1]==3){
			nums2[j-1]=nums2[j-1]/nums[i];
		}
		else{
			nums2[j]=nums[i];
			put2[j-1]=put[i-1];
			j++;
		}
	}
	//for(int i=0;i<j;i++) cerr << nums2[i] << '!';//!!!!!
	//cerr << endl;
	double sum=nums2[0];
	for(int i=1;i<j;i++){
		if(put2[i-1]==0) sum+=nums2[i];
		else sum-=nums2[i];
	}
 	return sum;
}
void cacul(int pla){
	if(pla==ncount-1){
		double tmp2=cacusum();
		if(tmp2 > ans) ans=tmp2;
		return;
	}
	for(int i=0;i<4;i++){
		if(chcount[i]==0) continue;
		put[pla]=i;
		chcount[i]--;
		cacul(pla+1);
		chcount[i]++;
	}
}
int main(){
	string s;
	stringstream sin;
	getline(cin,s);
	//sin.clear();
	sin.str(s);
	while(1){
		sin >> nums[ncount];
		if(sin.fail()) break;
		ncount++;
	}
	for(int i=1;i<ncount;i++){
		char tmp;
		cin >> tmp;
		if(tmp=='+') chcount[0]++,put[i-1]=0;
		else if(tmp=='-') chcount[1]++,put[i-1]=1;
		else if(tmp=='*') chcount[2]++,put[i-1]=2;
		else if(tmp=='/') chcount[3]++,put[i-1]=3;
	}
	ans = cacusum();
	cacul(0);
		cout << fixed << setprecision(2) << ans << '\n';
	return 0;
}