#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int>& arr , int n){
    int i = 0 , j = n - 1;
    while(i < j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    Reverse(arr , n);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}
