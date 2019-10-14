#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int n,m;
struct edge{
	int cit1,cit2,len;
	bool used;
}graph[46];
struct ans
{
	int aa,bb;
}anss[11];
bool operator < (edge x, edge y){
	return x.len < y.len;
}
bool operator < (ans x, ans y){
	return x.aa < y.aa || x.aa==y.aa && x.bb < y.bb;
}
int root[11];
int Root(int x){
	return (root[x] == -1) ? x : (root[x]=Root(root[x]));
}
void Merge(int x, int y){
	root[Root(y)]=Root(x);
}
int main(){
	cin >> n >> m;
	map <string, int> node;
	string city[11],tmp1,tmp2;
	int sum=0,findnod=0;
	for(int i=0;i<n;i++){
		cin >> city[i];
		node[city[i]] = i;
	}
	for(int i=0;i<m;i++){
		int tmp;
		cin >> tmp1 >> tmp2 >> tmp;
		graph[i].cit1 = node[tmp1];
		graph[i].cit2 = node[tmp2];
		graph[i].len = tmp;
		if(graph[i].cit1>graph[i].cit2){
			swap(graph[i].cit1,graph[i].cit2);
		}
		graph[i].used=0;
	}
	sort(graph,graph+m);
	for(int i=0;i<n;i++){
		root[i]=-1;
	}
	for(int i=0;i<m;i++){
		if(Root(graph[i].cit1) == Root(graph[i].cit2)) continue;
		Merge(graph[i].cit1,graph[i].cit2);
		sum+=graph[i].len;
		//cerr << city[graph[i].cit1] << ' ' << city[graph[i].cit2] << ' ' << graph[i].len << endl;
		anss[findnod].aa=graph[i].cit1;
		anss[findnod].bb=graph[i].cit2;
		graph[i].used=1;
		findnod++;
		if(findnod==n-1) break;
	}
	sort(anss,anss+n-1);
	for(int i=0;i<n-1;i++){
		cout << '(' << city[anss[i].aa] << ' ' << city[anss[i].bb] << ')';
	}
	cout << '\n' << sum << '\n';
	return 0;
}