#include <bits/stdc++.h>

using namespace std;

int main(){
    string word;
    cin >> word;
    int checkPoint = word.size() / 2;

    for(int i=0; i<checkPoint; i++){
        if(word[i] != word[word.size()-i-1]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;

}