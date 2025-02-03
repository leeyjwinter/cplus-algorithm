#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
const int MAX = 2147483647;
int ans = MAX;
vector<vector<int>> map;
vector<bool> visited;

void dfs(int n, int links, int dist){
    // cout << "n : " << n << " links : " << links << " dist : " << dist << "\n";
    // 연결 완료
    // min 값 비교 필요
    if(links == N){
        ans = min(ans, dist);
        return;
    }

    if(dist>ans){
        return;
    }

    for(int i=0; i<N; i++){
        // 중간에 시작지점으로 돌아오면 안됨
        if(!visited[i] && map[n][i]!=0 && (i!=0 || i==0 && links==N-1)){
            visited[i] = true;
            dfs(i, links+1, dist+map[n][i]);
            visited[i] = false;
        }
    }

}

int main(){

    cin >> N;
    
    // map 받기
    // visited 초기화
    for(int i=0;i <N; i++){
        vector<int> v;
        vector<bool> visit;
        for(int j=0; j<N; j++){
            int el;
            cin >> el;
            v.push_back(el);
        }
        map.push_back(v);
        visited.push_back(false);
    }

    dfs(0,0,0);
    cout << ans;
    

    // for(int i=0;i <N; i++){
    //     for(int j=0; j<N; j++){
    //         cout << map[i][j] << " ";
    //     }
    //     cout << "\n";
    // }



}

