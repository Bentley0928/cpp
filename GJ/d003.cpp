#include <iostream>
#include <algorithm>
using namespace std;
int dp[100][100];
int main(){
	while(1){
		string s,ss;
		string ans="";
		cin >> s >> ss;
		if(cin.fail()) break;
		int siz1=s.length(),siz2=ss.length();
		for(int i=0;i<siz1;i++){
			for(int j=0;j<siz2;j++){
				if(s[i]==ss[j]){
					dp[i+1][j+1]=dp[i][j]+1;
				}
				else dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
			}
		}
		cout << s << ' ' << ss << " = ";
		if(dp[siz1][siz2]==0){
			cout << "0\n";
			continue;
		}
		for(int l=dp[siz1][siz2],x=siz1,y=siz2; l>0;l--,x--,y--){
			while(dp[x-1][y] == l) x--;
			while(dp[x][y-1] == l) y--;
			ans=s[x-1]+ans;
		}
		cout << ans << '\n';
		//cout << dp[siz1][siz2] << endl;
	}
	return 0;
}