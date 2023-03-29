#include <bits/stdc++.h>
using namespace std;

int a[26][26];

int main() {
    int n;
    string s;
    while(cin>>n){
        memset(a,30,sizeof(a));
        for(int i=0;i<n;i++){
            cin>>s;
            a[s[0]-'A'][s[1]-'A']=1;
        }
        for(int k=0;k<26;k++){
            for(int i=0;i<26;i++){
                for(int j=0;j<26;j++){
                    a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
                }
            }
        }
        int re=30;
        for(int i=0;i<26;i++){
            re=min(re,a[i][i]);
        }
        if(re==30)cout<<0<<endl;
        else cout<<re<<endl;
    }
}