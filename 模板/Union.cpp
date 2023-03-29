#include <bits/stdc++.h>
using namespace std;

int p[10005];
int n,m,q,a,b;

int find(int a){
    if(p[a]==a) return a;
    else{
        p[a]=find(p[a]);
        return p[a];
    }
}

int main() {
    cin>>n>>m>>q;
    for(int i=0;i<n;i++){
        p[i]=i;
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        a--;
        b--;
        p[find(a)]=find(b);
    }
    for(int i=0;i<q;i++){
        cin>>a>>b;
        if(find(a-1)==find(b-1))cout<<":)\n";
        else cout<<":(\n";
    }
}