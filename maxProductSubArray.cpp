#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int maxPro = 1 , pre = 1 , suff = 1;
    for(int i = 0; i < n; i++){
        pre *= arr[i];
        suff *= arr[n-1-i];
        if(pre == 0) pre = 1;
        if(suff == 1) suff = 1;
        maxPro = max(maxPro , max(pre , suff));
    }
    cout<<maxPro<<endl;
    return 0;
}
