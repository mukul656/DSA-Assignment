#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int Max = INT_MIN , mini = INT_MAX;
    for(int i = 0; i < n; i++){
        Max = max(Max , arr[i]);
        mini = min(mini , arr[i]);
    }
    cout<<Max<<endl;
    cout<<mini<<endl;
    return 0;
}
