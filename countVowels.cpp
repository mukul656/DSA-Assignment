#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int vowelCount = 0 , consCount = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a'
          || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowelCount++;
          }
          else consCount++;
    }
    cout<<"Vowels = "<<vowelCount<<endl;
    cout<<"Consonants = "<<consCount<<endl;
    return 0;
}
