#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr , int n){
    int total = 0 , pre = 0;
    for(int i = 0; i < n; i++) total += arr[i];
    for(int i = 0; i < n; i++){
        int suff = total - pre - arr[i];
        if(pre == suff) return i;
        pre += arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int ind = f(arr , n);               // this return pivot index
    cout<<arr[ind]<<endl;                    // pivot element
    return 0;
}
