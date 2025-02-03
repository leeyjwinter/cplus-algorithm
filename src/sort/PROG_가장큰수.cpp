#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int numA, int numB) {
	string a = to_string(numA);
	string b = to_string(numB);
	a.append(b);
	b.append(a);
	return (a > b);
}

string solution(vector<int> numbers) {
	string answer = "";
	bool onlyZero = true;
	sort(numbers.begin(), numbers.end(), cmp);
	for(int i=0; i<numbers.size(); i++){
		if(numbers[i]!=0) onlyZero = false;
		answer.append(to_string(numbers[i]));
	}
	if(onlyZero) return "0";
	return answer;
}
