#include <iostream>
#include <vector>

using namespace std;

int main(){
    //2d vector that displays all odd number up tp 100 with rows of 5
    vector<vector<int>> v = {
        {1, 3, 5, 7, 9},
        {11, 13, 15, 17, 19},
        {21, 23, 25, 27, 29},
        {31, 33, 35, 37, 39},
        {41, 43, 45, 47, 49},
        {51, 53, 55, 57, 59},
        {61, 63, 65, 67, 69},
        {71, 73, 75, 77, 79},
        {81, 83, 85, 87, 89},
        {91, 93, 95, 97, 99}
    };
    //vector<vector<int>> v;
    //vector<int> row;
    //for (int i = 1; i <= 100; i += 2) {
    //     row.push_back(i);
    //     if (row.size() == 5) {
    //        v.push_back(row);
    //        row.clear();
    //    }
    //}

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}