#include<bits/stdc++.h>
using namespace std;

const int maxn = 200000;
int n, Q, p[maxn][20], root, siz[maxn], dep[maxn], tmp, q[20], ans;
bool flag;
vector <int> v[maxn];
 
int dfs(int node, int d){
    dep[node] = d + 1;
    if (v[node].empty()){
        siz[node] = 1;
        return 1;
    }
    int total = 1;
    for (int i:v[node]){
        total += dfs(i, d+1);
    }
    siz[node] = total;
    return siz[node];
}
 
int lca(int a, int b){
    if (dep[b] < dep[a]) swap(a, b);
    if (dep[a] != dep[b]){
        int dif = dep[b] - dep[a];
        for (int i = 0; i < 20; i++){
            if (dif & 1) b = p[b][i];
            dif >>= 1;
        }
    }
    if (a == b) return a;
    for (int i = 19; i >= 0; i--){
        if (p[a][i] != p[b][i]){
            a = p[a][i];
            b = p[b][i];
        }
    }
    return p[a][0];
}
 
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> p[i][0];
        v[p[i][0]].push_back(i);
    }
    for (int i = 1; i < 20; i++){
        for (int j = 1; j <= n; j++){
            p[j][i] = p[p[j][i-1]][i-1];
        }
    }
    dfs(0, 0);
    cin >> Q;
    while (Q--){
        cin >> tmp;
        ans = 0;
        for (int i = 0; i < tmp; i++){
            cin >> q[i];
        }
        if (tmp == 1) cout << siz[q[0]] << "\n";
        else{
            for (int i = 0; i < tmp; i++){
                flag = true;
                for (int j = 0; j < tmp; j++){
                    if (i == j) continue;
                    if (lca(q[i], q[j]) == q[j]){
                        flag = false;
                        break;
                    }
                }
                if (flag) ans += siz[q[i]];
            }
            cout << ans << "\n";
        }
    }
}