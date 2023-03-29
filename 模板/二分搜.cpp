#include <iostream>
#include <vector>

using namespace std;

int Recursive(vector<int> v, int l, int r, int x){
    if (l <= r) {
        int mid = (l + r) / 2;

        if (v[mid] == x) return mid;

        else if (v[mid] > x) return Recursive(v, l, mid - 1, x);
 
        return Recursive(v, mid + 1, r, x);
    }
    return -1;
}

int Iterative(vector<int> v,int x){
    int l=0,r=v.size()-1;
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        if (v[m] == x) return m;
        
        else if (v[m] < x) l = m + 1;
        
        else{r=m-1;}
    }
    return -1;
}

int main(){
    int aim=25;
    vector<int> v={1,4,7,10,14,17,22,25,56,88,104};
    cout<<Recursive(v,0,10,25)<<endl;
    cout<<Iterative(v,25)<<endl;
}