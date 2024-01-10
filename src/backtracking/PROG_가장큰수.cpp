#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
const int S = 9;
int sudoku[S][S];
bool sudokuDone = false;
int lev = 0;

void checkCol(int i, int j, vector<bool> &v) {
	for (int k = 0; k < S; k++) {
		v[sudoku[i][k]] = true;
	}
}

void checkRow(int i, int j, vector<bool> &v) {
	for (int k = 0; k < S; k++) {
		v[sudoku[k][j]] = true;
	}
}

void checkBox(int i, int j, vector<bool> &v) {
	i = (i/3)*3;
	j = (j/3)*3;
	for (int k = i; k < i+3; k++) {
		for (int l = j; l < j+3; l++) {
			v[sudoku[k][l]] = true;
		}
	}
}

vector<bool> check(int i, int j) {
	vector<bool> v(10,false);
	checkCol(i, j, v);
	checkRow(i, j, v);
	checkBox(i, j, v);

	return v;
}

void dfs(int i, int j, int curLev){

	vector<bool> v = check(i,j);
	for(int idx=1; idx<=9; idx++){
		if(!v[idx]){
			sudoku[i][j] = idx;

			if(curLev >= lev-1) {
					for (int i = 0; i < S; i++) {
							cout << "\n";
							for (int j = 0; j < S; j++) {
								cout << sudoku[i][j] << " ";
							}
						}
					return;
				}
			bool next = false;
			for(int k=i; k<S; k++){
				if(next) break;
				for(int l=0; l<S; l++){
					if(k==i && l==j)continue;
					if(sudoku[k][l]==0){
						next = true;
						dfs(k,l,curLev+1);
						break;
					}

				}
			}
			sudoku[i][j] = 0;
		}
	}


}

int main() {

	for (int i = 0; i < S; i++) {
		for (int j = 0; j < S; j++) {
			cin >> sudoku[i][j];
			if(sudoku[i][j]==0) lev++;
		}
	}

	for (int i = 0; i < S; i++) {
		for (int j = 0; j < S; j++) {
			if (sudoku[i][j] == 0) {
				dfs(i,j,0);
				return 0;
			};
		}
	}


}
