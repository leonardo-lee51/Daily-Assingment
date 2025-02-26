#include <iostream>
#include <vector>
using namespace std;

int vectorSum(vector<int> v){
        int sum = 0;
        for(int i = 0; i < v.size(); i++){
            sum+= v[i];
        }
        return sum;
    }
double vectorSum(vector<double> v){
    double sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}
float vectorSum(vector<float> v){
    float sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}
int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<double> v2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector<float> v3 = {1.2f, 2.3f, 3.4f, 4.5f, 5.6f};


    cout << vectorSum(v1) << endl;
    cout << vectorSum(v2) << endl;
    cout << vectorSum(v3) << endl;
    return 0;
}