#include<bits/stdc++.h>
using namespace std;
void print(string s){
  sort(s.begin(), s.end());
  char ch = s[0];
  int count = 1;
  for(int i = 1; i < s.size(); i++){
    if(s[i] == ch) count++;
    else{
      cout<<ch<<count<<" ";
      count = 1;
      ch = s[i];
    }
  }
  cout<<ch<<count<< " ";
}
int main(){
    string s;
    cin>>s;
    print(s);
    return 0;
}
