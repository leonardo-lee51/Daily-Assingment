#include <iostream>

using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0;
    int curr = 1;
    for (int i = 2; i <= n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
int main() {
    int n = 10;
    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;
    return 0;
}