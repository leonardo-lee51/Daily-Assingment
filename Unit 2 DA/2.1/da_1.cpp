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

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    vectorSum(v);
    cout << vectorSum(v) << endl;
    return 0;
}