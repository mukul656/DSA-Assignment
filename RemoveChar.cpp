#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    string ans;
    for(int i = 0; i < n; i++){
        if(isalpha(s[i])) ans += s[i];
    }
    cout<<ans<<endl;
    return 0;
}
