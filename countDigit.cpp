#include<bits/stdc++.h>
using namespace std;
int count(int n){
    if(n == 0) return 0;
    return 1 + count(n/10);
}
int main(){
    int n;
    cin>>n;
    if(n == 0) cout<<1<<endl;
    else cout<<count(n)<<endl;
    return 0;
}