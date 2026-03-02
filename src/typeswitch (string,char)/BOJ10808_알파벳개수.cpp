#include <bits/stdc++.h>

using namespace std;

int main(){
    // char b = 'b';
    // cout << int(b - 'a');

    // b면 b - 'a'
    string word;
    vector<int> ans(26,0);
    cin >> word;
    
    for(char let : word){
        ans[let-'a']++;
    }

    for(int i=0; i<26; i++){
        cout << ans[i] << " ";
    }
}