#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int num = 9;

int main(){
    vector<int> dwarves;
    int sum = 0;
    for (int i=0; i<num; i++){
        int dwarf;
        cin >> dwarf;
        sum+=dwarf;
        dwarves.push_back(dwarf);
    }

    sort(dwarves.begin(), dwarves.end());

    // 전체 난쟁이 합 
    // 2씩 골라서 합한게 전체 난쟁이 합 - 100 과 같으면 두 값 빼고 sort 해서 리턴 
    
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(dwarves[i]+dwarves[j] == sum - 100){
                for(int k=0; k<num; k++){
                    if(k!=i && k!=j){
                        cout << dwarves[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }


}
