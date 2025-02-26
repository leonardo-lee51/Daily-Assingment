#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int gcd(int a, int b, int c){
    return gcd(gcd(a, b), c);
}

int gcd(vector<int> num){
    if(num.empty()){
    return 0;
    }
    int result = num[0];
    for(size_t i = 1; i < num.size(); i++){
        result = gcd(result, num[i]);
    }
    return result;
}

int main(){
    int a = 10;
    int b = 15;
    int c = 20;
    vector<int> v = {a, b, c};
    cout << gcd(v) << endl;
}