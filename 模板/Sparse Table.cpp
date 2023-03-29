#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
const int logN = ceil(log2(N));
 
int value[N];
int t[logN][N]; // t[i][j]儲存區間[j, j+2ⁱ-1]的最小值的索引值
 
void construct()
{
    for (int i=0; i<N; ++i)
        t[0][i] = value[i]; // 此處有異
 
    // 減一、小於，可以改成小於等於。
    for (int i=1; (1<<i)<=N; ++i)
        for (int j=0; j+(1<<i)<=N; ++j)
            t[i][j] = min(t[i-1][j], t[i-1][j+(1<<(i-1))]);
}
 
int query(int a, int b)
{
    int p = 31 - __builtin_clz(abs(b - a) + 1);
    return min(t[p][a], t[p][b-(1<<p)+1]);
}

int main(){
    //....
}