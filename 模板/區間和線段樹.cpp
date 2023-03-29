#include<bits/stdc++.h>
using namespace std;

int t, n, Case, a, b;
//total：線段樹的每個節點，用來紀錄區間和
//開4倍陣列避免溢位
int total[50005<<2];
string str;
 
void pull(int x){
    //合併左節點與右節點
    total[x] = total[x<<1] + total[x<<1|1];
}
void build(int x, int l, int r){
    if (l == r){
        cin >> total[x];
        return;
    }
    int mid = (l+r) >> 1;
    build(x<<1, l, mid);
    build(x<<1|1, mid+1, r);
    pull(x);
}
int query(int x, int l, int r, int ql, int qr){
    //[ql, qr]: 查詢區間
    if (ql <= l && qr >= r){
        return total[x];
    }
    int ret = 0;
    int mid = (l+r)>>1;
    if (ql <= mid){
        ret += query(x<<1, l, mid, ql, qr);
    }
    if (qr > mid){
        ret += query(x<<1|1, mid+1, r, ql, qr);
    }
    return ret;
}
void update(int x, int l, int r, int pos, int val){
    if (l == r){
        total[x] += val;
        return;
    }
    int mid = (l+r) >> 1;
    if (pos <= mid) update(x<<1, l, mid, pos, val);
    else update(x<<1|1, mid+1, r, pos, val);
    pull(x);
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        Case++;
        cout << "Case " << Case << ":\n";
        build(1, 1, n);
        while(1){
            cin >> str;
            if (str == "End") break;
            else if (str == "Query"){
                cin >> a >> b;
                cout << query(1, 1, n, a, b) << "\n";
            }
            else if (str == "Add"){
                cin >> a >> b;
                update(1, 1, n, a, b);
            }
            else if (str == "Sub"){
                cin >> a >> b;
                update(1, 1, n, a, -b);
            }
        }
    }
}