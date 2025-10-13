#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>& arr, int n, int k) {
    k = k % n; 
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}
void rightRotate(vector<int>& arr, int n, int k) {
    k = k % n;
    reverse(arr.end() - k, arr.end());
    reverse(arr.begin(), arr.end() - k);
    reverse(arr.begin(), arr.end());
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    leftRotate(arr , n , k);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" "; // left Rotation
    cout<<endl;
    rightRotate(arr , n , k);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" "; // right Rotation 
    return 0;
}
