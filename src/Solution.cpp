#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

const int MAX = 125 * 125 * 9;
int N;
int ARR[125 + 1][125 + 1];
int DP[125 + 1][125 + 1];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

struct XY {
	int x;
	int y;
	int dist;

	bool operator<(const XY &xy) const{
		return this->dist > xy.dist;
	}
};

int main() {
	int T = 1;
	while (true) {
		cin >> N;
		if (N == 0)
			return 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> ARR[i][j];
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				DP[i][j] = MAX;
			}
		}
		DP[0][0] = ARR[0][0];

		priority_queue<XY> q;
		q.push( { 0, 0, ARR[0][0] });

		while (!q.empty()) {
			XY cur = q.top();
			q.pop();

			for (int i = 0; i < 4; i++) {
				int newx = dx[i] + cur.x;
				int newy = dy[i] + cur.y;
				if (newx < 0 || newx > N - 1 || newy < 0 || newy > N - 1)
					continue;
				if (DP[cur.x][cur.y] + ARR[newx][newy] < DP[newx][newy]) {
					DP[newx][newy] = DP[cur.x][cur.y] + ARR[newx][newy];
					q.push( { newx, newy, DP[newx][newy]});
				}
			}

		}

		cout << "Problem " << T << ": " << DP[N - 1][N - 1] << "\n";
		T++;
	}

	return 0;

}
