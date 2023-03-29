#include<bits/stdc++.h>
using namespace std;

struct e{
    int x,y,cost;
};
bool cmp(e x,e y){
    return x.cost<y.cost;
}
int p[10005],n,m,j,k,c,ans;
vector<e> v;
int find(int a){
    if(p[a]==a)return a;
    else{
        p[a]=find(p[a]);
        return p[a];
    }
}

int main(){
	while(cin>>n>>m){
        if(n==0&&m==0)break;
        v.clear();
        ans=0;
        for(int i=1;i<=n;i++){
            p[i]=i;
        }
        for(int i=0;i<m;i++){
            cin>>j>>k>>c;
            v.push_back({j,k,c});
        }
        sort(v.begin(),v.end(),cmp);
        for(e tmp:v){
            j=find(tmp.x);
            k=find(tmp.y);
            if(j==k)continue;
            p[k]=j;
            ans+=tmp.cost;
            n--;
        }
        if(n>1)cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
	return 0;
}