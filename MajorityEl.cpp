#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int cnt = 0 , el;
    for(int i = 0; i < n; i++){
        if(cnt == 0){
            el = arr[i];
        }
        else if(arr[i] == el) cnt++;
        else cnt--;
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == el) count++;
    }
    if(count > n/2) cout<<el<<endl;
    else cout<<-1<<endl;
    return 0;
}
