#include<bits/stdc++.h>
using namespace std;
vector<int> f(vector<int>& arr1 , vector<int>& arr2){
    int n = arr1.size() , m = arr2.size();
    int i = 0 , j = 0;
    vector<int> ans;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i = 0; i < n; i++) cin>>arr1[i];
    for(int i = 0; i < m; i++) cin>>arr2[i];
    vector<int> ans = f(arr1 , arr2);
    for(int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
    return 0;
}
