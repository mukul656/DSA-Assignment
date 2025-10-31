#include<bits/stdc++.h>
using namespace std;
bool f(vector<vector<int>>& arr , int el){
    int low = 0 , high = arr.size()*arr[0].size() - 1;
    while(low <= high){
        int mid = (low + high)/2;
        int row = mid/arr[0].size() , col = mid%arr[0].size();
        if(arr[row][col] == el) return true;
        else if(arr[row][col] > el) high = mid - 1;
        else low = mid + 1;
    }
    return false;
}
int main(){
    int n , m;
    cin>>n>>m;
    vector<vector<int>>arr(n , vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    int el;
    cin>>el;
    
    if(f(arr , el)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}
