#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> v;
    vector<int> row;
    for (int i = 1; i <= 100; i += 2) {
        row.push_back(i);
        if (row.size() == 5) {
            v.push_back(row);
            row.clear();
       }
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}