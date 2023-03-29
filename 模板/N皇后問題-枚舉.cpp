#include <bits/stdc++.h>
using namespace std;

int a,b;//先放的座標
int cnt;//第N組解
int row[8];

//輸出
void printRow(){
	cout<<' '<<++cnt<<"     ";
	for(int i=0;i<8;i++){
		cout<<' '<<row[i]+1;
	}
	cout<<'\n';
}

//判別為置是否可放
bool check(int r,int c){//座標
	for(int i=0;i<c;i++){
		if(row[i]==r || abs(row[i]-r)==abs(i-c)){
			return false;
		}
	}
	return true;
}

void queen(int col){
	if(col==8 && row[b]==a){//只保留含(a,b)的解
		printRow();
	}
	else{
		for(int i=0;i<8;i++){
			if(check(i,col)){
				row[col]=i;
				queen(col+1);
			}
		}
	}
}

int main(){
	cin>>a>>b;//輸入先放的位置
	memset(row,-1,sizeof(row));
	cnt=0;
	queen(0);
	
	return 0;
}