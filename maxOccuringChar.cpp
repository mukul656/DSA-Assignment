#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<int , int> mpp;
    for(auto it : s) mpp[it]++;
    int maxi = -1;
    char c;
    for(auto it : mpp){
        if(it.second > maxi){
            maxi = it.second;
            c = it.first;
        }
    }
    cout<<c<<endl;
    return 0;
}
