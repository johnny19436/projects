#include <iostream>
#include <unordered_set>
using namespace std;
 
int p[10005], n, m, a, b, c, ans;
unordered_set <int> st[10005];
 
int Find(int a){
    if (p[a] == a) return a;
    else {
        st[p[a]].erase(a);
        p[a] = Find(p[a]);
        st[p[a]].insert(a);
        return p[a];
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> n >> m){
        for (int i = 1; i <= n; i++){
            p[i] = i;
            st[i].clear();
        }
        while (m--){
            cin >> a;
            if (a == 1){
                cin >> b >> c;
                b = Find(b);
                c = Find(c);
                if (c == b) continue;
                p[ c] = b;
                st[b].insert(c);
            }
            else{
                cin >> b;
                if (p[b] == b){
                    if (st[b].size() == 0) continue;
                    c = *st[b].begin();
                    p[ c] = c;
                    st[b].erase(c);
                    for (int i:st[b]){
                        st[ c].insert(i);
                        p[i] = c;
                    }
                    st[b].clear();
                }
                else{
                    c = Find(b);
                    for (int i:st[b]){
                        st[ c].insert(i);
                        p[i] = c;
                    }
                    st[b].clear();
                    st[p[b]].erase(b);
                    p[b] = b;
                }
            }
        }
        ans = 0;
        for (int i = 1; i <= n; i++){
            if (p[i] == i) ans += 1;
        }
        cout << ans << "\n";
    }
}