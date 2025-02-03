#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 경로의 최댓값
const int MAX = 25000000;

struct cmp{
bool operator()(pair<int, int>&a, pair<int, int>&b) {
              if (a.first == b.first) {
                  return a.second >  b.second;
              }
              else {
                  return a.first > b.first;
              }
          }
};

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;
    int dist[N+1][N+1];
    bool visited[N+1];

    fill(&dist[0][0] , &dist[N+1][N+1], MAX );

    // 0으로 초기화
    for (int i = 1; i <= N; i++) {
    	dist[i][i] = 0;
	}

    // 거리들 초기화
    for(vector<int> track : road){
    	dist[track[0]][track[1]] = min(dist[track[0]][track[1]],track[2]);
    	dist[track[1]][track[0]] = dist[track[0]][track[1]];
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    pq.push({0,1});

    while(!pq.empty()){
    	pair<int,int> top = pq.top();
    	int cur = top.second;
    	pq.pop();

    	if(visited[cur]) continue;
    	visited[cur] = true;
//    	cout << " cur : " << cur << "\n";
    	for (int i = 1; i <= N; i++) {

    		dist[1][i] = min(dist[1][cur] + dist[cur][i] , dist[1][i]);
    		dist[i][1] = dist[1][i];
    		pq.push({dist[1][i], i});
//    		cout << " i : " << i << " " << dist[1][i] << "\n";

//    		cout << "dist of 1 " << i << " : " << dist[1][i] ;


		}
    }

    for(int i=1; i<=N; i++){
    	if(dist[1][i] <= K) {
//    		cout << i << " ";
    		answer++;
    	}
    }


    return answer;
}
