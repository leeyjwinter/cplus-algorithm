#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int ansSize;
bool flag;
vector<string> answer;
class Pair {
public:
	string str;
	bool checked;

	Pair(string str1, bool checked1) {
		str = str1;
		checked = checked1;
	}

	bool operator <(const Pair &pair) const {
		return str < pair.str;
	}
};

void dfs(string cur, map<string, vector<Pair>> m, int cnt,
		vector<string> ans) {
	if(flag) return;
	if (cnt == ansSize){
		answer = ans;
		flag = true;
		return;
	}

	else{
		for(int i=0; i<m[cur].size(); i++){
			Pair &pair = m[cur][i];
			if(pair.checked) continue;
			pair.checked= true;
			ans.push_back(pair.str);

			dfs(pair.str, m, cnt+1 , ans);
			ans.erase(ans.end()-1);
			pair.checked = false;
		}
	}
	return;

}

vector<string> solution(vector<vector<string>> tickets) {

	ansSize = tickets.size() + 1;
	map<string, vector<Pair>> m;
	for (vector<string> ticket : tickets) {
		m[ticket[0]].push_back(Pair(ticket[1], false));
	}
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		sort((iter->second).begin(), (iter->second).end());
	}
	vector<string>v(1, "ICN");
	dfs("ICN", m, 1, v);
	return answer;

}
