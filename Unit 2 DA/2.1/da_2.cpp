#include <iostream>
#include <vector>

using namespace std;

int vectorSum(vector<int> v){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}

double averageVector(vector<int> v){
    return vectorSum(v) / v.size();
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 10};
    cout << averageVector(v) << endl;

    return 0;
}