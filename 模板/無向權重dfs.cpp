#include <bits/stdc++.h>
using namespace std;

map<int,vector<pair<int,int>>> m;

void dfs(int n,int last,int mini){
	//操作
	for(auto p:m[n]){//traverse子節點
		if(p.first==last)continue;//略過原節點
		else dfs(p.first,n,min(p.second,mini));
	}
}

int main(){
    int a,b,c;
    //輸入
        cin>>a>>b>>c;
        m[a].push_back({b,c});
        m[b].push_back({a,c});
	return 0;
}