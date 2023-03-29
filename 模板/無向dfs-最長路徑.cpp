#include <bits/stdc++.h>
using namespace std;

vector<int> arr[100005];
int dis[100005];

void dfs(int n,int last){
	for(auto p:arr[n]){
		if(p!=last){
			dis[p]=dis[n]+1;
			dfs(p,n);
		}
	}
}

int main(){
    int n;
    cin>>n;
			//輸入
			int a,b;
			cin>>a>>b;
			arr[a].push_back(b);
			arr[b].push_back(a);
		//第一次dfs 得idx
		dfs(0,-1);
		int idx=0,maxi=0;
		for(int i=0;i<n;i++){
			if(dis[i]>maxi){
				maxi=dis[i];
				idx=i;
			}
		}
		//初始化
		for(int i =0;i<n;i++){
			dis[i]=0;
		}
		//第二次dfs 得maxi
		dfs(idx,-1);
		for(int i=0;i<n;i++){
			maxi=max(maxi,dis[i]);
		}
		cout<<maxi<<endl;
	return 0;
}