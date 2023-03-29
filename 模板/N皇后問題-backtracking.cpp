#include <bits/stdc++.h>
using namespace std;

int a[8][8];
int has_queen[8]={-1,-1,-1,-1,-1,-1,-1,-1};
int maxi;
int temp;

bool check(int r,int c){
	for(int i=0;i<8;i++){
		if(has_queen[i]>=0 && (has_queen[i]==c || abs(i-r)==abs(has_queen[i]-c))){
			return false;
		}
	}
	return true;
}

void queen(int r){
	if(r==8){
		maxi=max(maxi,temp);
	}
	else{
		for(int i=0;i<8;i++){
			if(check(r,i)){
				has_queen[r]=i;
				temp+=a[r][i];
				queen(r+1);
				has_queen[r]=-1;
				temp-=a[r][i];
			}
		}
	}
}

int main(){
	memset(has_queen,-1,sizeof(has_queen));
	for(int j=0;j<8;j++){
		for(int k=0;k<8;k++){
			cin>>a[j][k];
		}
	}
	maxi=0;
	temp=0;
	queen(0);
	cout<<maxi<<endl;
	return 0;
}