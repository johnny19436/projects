#include <bits/stdc++.h>
using namespace std;
#define INF 9999999

int graph[101][101];

int main(){
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
            if(graph[i][j]==0)graph[i][j]=INF;
        }
    }
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(graph[i][k]+graph[k][j] < graph[i][j])
                    graph[i][j] =graph[i][k]+graph[k][j];
	return 0;
}