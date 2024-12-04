#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// https://www.acmicpc.net/problem/11651

struct XY{
    int x;
    int y;
    XY(int x, int y) : x(x), y(y) {}
};

bool cmp(XY a, XY b){
    if(a.y != b.y)
        return a.y < b.y;
    return a.x < b.x; 
}

int main()
{
    int n;
    cin >> n;
    vector<XY> vec;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        vec.push_back(XY(x,y));
    }

    sort(vec.begin(), vec.end(), cmp);
    for(int i=0; i<n; i++){
        cout << vec[i].x << " " << vec[i].y << "\n"; 
    }
}