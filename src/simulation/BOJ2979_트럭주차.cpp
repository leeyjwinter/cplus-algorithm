#include <bits/stdc++.h>

using namespace std;

// 5 3 1
// 1 6
// 3 5
// 2 8

// 33
int main(){

    //1 6 이라는 의미는 5시간 (인덱스 1,2,3,4,5 에 넣기) 인덱스 1은 1~2시까지라는 뜻
    vector<int> timeline(100,0);
    vector<int> price(4);
    int ans = 0;
    for (int i=1; i<4; i++){
        cin >> price[i];
    }

    for(int i=0; i<3; i++){
        int start, end;
        cin >> start;
        cin >> end;

        for(int k=start; k<end; k++){
            timeline[k]++;
        }
    }

    for(int i=0; i<100; i++){
        int timePrice = timeline[i]*price[timeline[i]];
        ans+=timePrice;
    }

    cout << ans;

}