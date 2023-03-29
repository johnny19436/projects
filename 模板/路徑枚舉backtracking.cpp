#include <bits/stdc++.h>
using namespace std;

int a[6][6];

void dfs(int cnt,int last,int path){
	if(cnt<9){
		for(int i=1;i<6;i++){
			if(last!=i&&a[last][i]==0){
				a[last][i]=1;
                a[i][last]=1;
                dfs(cnt+1,i,path*10+i);
                a[last][i]=0;
                a[i][last]=0;
			}
		}
	}
	else if(cnt==9){
			cout<<path<<endl;
	}
}

int main(){
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			a[i][j]=0;
		}
	}
	a[1][4]=1;
    a[4][1]=1;
    a[2][4]=1;
    a[4][2]=1;
	dfs(1,1,1);
	return 0;
}