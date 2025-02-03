#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

void down(int &cur, int n, map<int, int> &m) {
	cur+=n;
	if(cur>=m.size()) cur=m.size()-1;
//	cout << "down is : " << cur << "\n";
}

void up(int &cur, int n, map<int, int> &m) {
	cur-=n;
	if(cur<0) cur=0;
//	cout << "up is : " << cur << "\n";
}

void del(int &cur, map<int, int> &m, stack<pair<int, int>> &s) {
//	cout << "deleting : " << cur << "\n";
	for(auto itr=m.begin(); itr!=m.end(); itr++){
		if(itr->second == cur){
			m.erase(itr);
			s.push(*itr);
			break;
		}
	}

//	// 지워진 실제 idx
//	int deletedIdx = curPair->second;


	for(auto itr=m.begin(); itr!=m.end(); itr++){
		if(itr->second >= cur) m[itr->first]--;
	}
//	for(auto itr=m.begin()+cur; itr<m.end(); itr++){
//		m[itr->first]--;
//	}

	//선택될 행
	if(cur>=m.size()) cur=m.size()-1;
}

void revert(int &cur, map<int, int> &m, stack<pair<int, int>> &s) {
//	cout << "reverting : " << cur << "\n";
	// 복구
	auto revertPair = s.top();
	s.pop();
	m[revertPair.first] = revertPair.second;

	// 복귀된것보다 idx 큰 애들 idx++
//	for(auto itr=m.begin()+revertPair.second+1; itr<m.end(); itr++){
//			m[itr->first]++;
//		}
	for(auto itr=m.begin(); itr!=m.end(); itr++){
			if(itr->second >= revertPair.second && itr->first != revertPair.first) m[itr->first]++;
		}

	//현재 선택 행이 만약 복귀된 애보다 뒤에 있으면 idx++
	if(cur>=revertPair.second) cur++;

}

string solution(int n, int k, vector<string> cmd) {
	string answer = "";
	for(int i=0; i<n; i++){
		answer.append("X");
	}

	map<int, int> m;
	stack<pair<int, int>> s;
	int cur = k;

	for (int i = 0; i < n; ++i) {
		m[i] = i;
	}

	for (string str : cmd) {
		if (str[0] == 'D') {
			down(cur, str[2]-'0', m);
		} else if (str[0] == 'U') {
			up(cur, str[2]-'0', m);
		} else if (str[0] == 'C') {
			del(cur, m, s);
		} else
			revert(cur,m, s);


		//print
//		for(auto pairs : m){
//			cout << pairs.first << " " << pairs.second << "\n";
//		}
//		cout << "\n";
	}

	for(auto pairs : m){
		answer.replace(pairs.first,1, "O");
	}

	return answer;
}

