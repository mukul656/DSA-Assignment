#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int el;
    cin>>el;
    vector<int> arr(n);
    bool found = false;
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == el){
            found = true;
            break;
        }
    }
    if(found) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}
