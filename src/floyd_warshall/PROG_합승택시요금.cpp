#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 40000001;
const int SIZE = 201;
int floydArr[SIZE][SIZE];

void floyd(int n) {
	for (int mid = 1; mid <= n; mid++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				floydArr[i][j] = min(floydArr[i][j],
						floydArr[i][mid] + floydArr[mid][j]);
				floydArr[j][i] = floydArr[i][j];
			}
		}
	}
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
	int answer = MAX;
	fill(&floydArr[1][1], &floydArr[n][n + 1], MAX);
	for (int i = 1; i <= n; i++) {
		floydArr[i][i] = 0;
	}

	// 플로이드 워셜 벡터 초기화
	for (vector<int> fare : fares) {
		floydArr[fare[0]][fare[1]] = fare[2];
		floydArr[fare[1]][fare[0]] = fare[2];
	}

	floyd(n);

	for (int i = 1; i <= n; i++) {
		answer = min(floydArr[s][i] + floydArr[i][a] + floydArr[i][b], answer);
	}
	return answer;
}

