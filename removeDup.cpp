#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> st;
    string ans;
    for(int i = 0; i < s.size(); i++){
        if(st.find(s[i]) == st.end()){
            ans.push_back(s[i]);
            st.insert(s[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
