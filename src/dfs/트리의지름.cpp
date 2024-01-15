//#include <bits/stdc++.h>
//
//using namespace std;
//int N;
//int maxDist;
//int endNode = 1;
//bool visited[10001];
//struct Node {
//	int node;
//	int dist;
//
//	bool operator <(const Node n) {
//		return n.dist < this->dist;
//	}
//};
//
//vector<vector<Node>> v;
//
//void dfs(int n, int distance) {
//	if (distance > maxDist) {
//		endNode = n;
//		maxDist = distance;
//	}
//
//	for (int i = 0; i < v[n].size(); i++) {
//		Node cur = v[n][i];
//		if (visited[cur.node])
//			continue;
//		visited[cur.node] = true;
//		dfs(cur.node, distance + cur.dist);
//	}
//}
//
//int main() {
//	cin >> N;
//	v.resize(N + 1);
//	for (int i = 0; i < N - 1; i++) {
//		int node1;
//		int node2;
//		int dist;
//		cin >> node1 >> node2 >> dist;
//		v[node1].push_back( { node2, dist });
//		v[node2].push_back( { node1, dist });
//	}
//
//	visited[1] = true;
//	dfs(1, 0);
//
//	for (int i = 1; i <= N; i++) {
//		visited[i] = false;
//	}
//	visited[endNode] = true;
//	dfs(endNode, 0);
//
//	cout << maxDist;
//
//}
