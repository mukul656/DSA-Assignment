#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int maxi = 0;
    map<int , int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
        maxi = max(maxi , mpp[arr[i]]);
    }
    int cnt = 0;
    for(auto it : mpp){
        if(it.second == maxi){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
