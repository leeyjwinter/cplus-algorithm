#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

vector<int> parentList;

class Edge {
public:
	int start;
	int end;
	int dist;

	Edge(int start, int end, int dist) {
		this->start = start;
		this->end = end;
		this->dist = dist;
	}

	bool operator <(const Edge &e) const {
		return this->dist > e.dist;
	}
};


int findParent(int a) {
//	cout << "finding parent of : " << a << endl;
	if (parentList[a] == a) {
		return a;

	}
	return parentList[a] = findParent(parentList[a]);
}

void unionParent(int a, int b) {
//	int parentA = findParent(a);
//	int parentB = findParent(b);
//	parentList[parentA] = parentList[parentB] = min(parentA, parentB);
	parentList[b] = a;
}


int solution(int n, vector<vector<int>> costs) {
	int answer = 0;

	//parent 배열 초기화
	for (int i = 0; i < n; i++) {
		parentList.push_back(i);
	}

	priority_queue<Edge> pq;

	for (auto vec : costs) {
		pq.push(Edge(vec[0], vec[1], vec[2]));
	}

	while (!pq.empty()) {
//		for(int i=0; i<n; i++){
//			cout << parentList[i] << " ";
//		}
//		cout << "\n";

		Edge curEdge = pq.top();
		pq.pop();
		int start = curEdge.start;
		int end = curEdge.end;
		if (findParent(start) == findParent(end)){
			continue;
		}
		answer += curEdge.dist;
		unionParent(start, end);

	}

	return answer;
}

//int main(){
////	solution(4, {{0,1,1},{0,2,2},{1,2,5},{1,3,1},{2,3,8}});
//	solution(5, {{0,1,1},{0,2,2},{1,2,5},{1,3,1},{2,3,8}});
//
//}
