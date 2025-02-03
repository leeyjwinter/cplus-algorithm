//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> scoville, int K) {
//    int answer = 0;
//
//
//    priority_queue<int, vector<int>, greater<int>> pq;
//    for(int i=0; i<scoville.size(); i++){
//    	pq.push(scoville[i]);
//    }
//
//    // 몇번만에 성공했는지 개수 확인
//    int cnt = 0;
//    while(pq.size()>=1){
//
//    	// K이상인 값 생기면 바로 return
//    	if(pq.top()>=K)
//    	return cnt;
//
//    	// size가 1인데도 K이상인값이 없었다는 것은 가망 없으므로 -1 return
//    	if(pq.size()==1)
//    		return -1;
//
//    	// 가장 안매운것 2개뽑아서 계산
//    	int a = pq.top();
//    	pq.pop();
//    	int b = pq.top();
//    	pq.pop();
//    	int newMin = a+b*2;
//
//    	// 계산된 값이 가장 안매운것보다 작거나 같으면 더 큰값을 넣을 수 없으므로 바로 -1 return
//    	if(newMin<=a) return -1;
//
//    	// 계산된값 넣고 cnt ++
//    	pq.push(newMin);
//    	cnt++;
//    }
//
//
//    return cnt;
//
//}
