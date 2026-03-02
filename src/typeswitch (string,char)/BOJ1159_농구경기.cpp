#include <bits/stdc++.h>

using namespace std;

int num;

int main(){


    // input 받고
    //오름차순 sort
    // 
    // 새 알파벳마다 cnt = 1로 시작, 현재 알파벳 가지고 있기
    // 다음 인덱스꺼가 앞자리 같은 알파벳이면 cnt ++
    // 다른 알파벳이면 현재 cnt >=5면 cout 알파벳, flag true 로 토글/ cnt = 1로 초기화, 다음 알파벳 가지고 있기

    cin >> num;
    vector<string> names;
    bool isPossible = false;

    for(int i=0; i< num; i++){
        string name;
        cin >> name;
        names.push_back(name);
    }

    sort(names.begin(), names.end(), less<>());
    char curFront;
    int cnt = 1;
    for(int i=0; i<num; i++){

        if (curFront != names[i][0]){
            if(cnt>=5){
                cout << curFront;
                isPossible = true;
            }

            cnt = 1;
            curFront = names[i][0];
        }
        else{
            cnt++;
        }
    }

    if(cnt>=5) {cout << curFront; isPossible=true;}

    if(!isPossible) cout << "PREDAJA";


}