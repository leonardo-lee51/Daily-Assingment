#include <iostream>

using namespace std;

void printNum(int n){
    if(n > 0){
        printNum(n -1);
        cout << n << " ";
    }
}

int main(){
    printNum(5);
    return 0;
}