#include <bits/stdc++.h>

using namespace std;
int N;
int C1;
int answer;
vector<int> v;

bool possib(int n) {
	int routers = C1 - 2;
	int cur = v[0];
	int i;
	for (i = 1; i < N - 1; i++) {
		if (routers == 0)
			break;
		if (v[i] - cur >= n) {
			routers--;
			cur = v[i];
		}
	}
	if (routers > 0 || v[N - 1] - v[i - 1] < n)
		return false;
	return true;
}

int main() {
	cin >> N >> C1;
	v.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int minVal = 1;
	int maxVal = v[N - 1] - v[0];
	while (minVal <= maxVal) {
		int mid = (minVal + maxVal) / 2;
		if (possib(mid)) {
			answer = mid;
			minVal = mid + 1;
		} else {
			maxVal = mid - 1;
		}
	}
	cout << answer;

}
