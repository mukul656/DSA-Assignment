#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int sum = 0 , maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > maxSum) maxSum = sum;
        if(sum < 0)  sum = 0;
    }
    cout<<maxSum<<endl;
    return 0;
}
