#include <iostream>
#include <algorithm>
using namespace std;
int ans;
void dfs(int d){
	char c;
	int n;
	cin >> c >> n;
	if(cin.fail()){
		cin.clear();
		cin >> c;
		return;
	}
	d+=n;
	ans=max(ans,d);
	dfs(d);//L
	dfs(d);//R
	cin >> c;
}
int main(){
	int n;
	cin >> n;
	string nums[]={"一","二","三","四","五","六","七","八","九","十"};
	for(int i=0;i<n;i++){
		ans=0;
		dfs(0);
		cout << "第"<< nums[i] << "棵二元樹最長路徑長度：" << ans << '\n'; 
	}
	return 0;
}