#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int gcd(int a, int b, int c){
    return gcd(gcd(a, b), c);
}

int main(){
    int a = 10;
    int b = 15;
    int c = 20;
    cout << gcd(a, b, c) << endl;
};