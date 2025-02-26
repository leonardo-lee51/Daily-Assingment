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
int average(vector<int> v){
    return vectorSum(v) / v.size();
}

double vectorSum(vector<double> v){
    double sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}
double average(vector<double> v){
    return vectorSum(v) / v.size();
}

float vectorSum(vector<float> v){
    float sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}
float average(vector<float> v){
    return vectorSum(v) / v.size();
}

int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<double> v2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector<float> v3 = {1.2f, 2.3f, 3.4f, 4.5f, 5.6f};

    cout << average(v1) << endl;
    cout << vectorSum(v1) << endl;

    cout << average(v2) << endl;
    cout << vectorSum(v2) << endl;

    cout << average(v3) << endl;
    cout << vectorSum(v3) << endl;

    return 0;
}