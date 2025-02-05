#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
    // Explanation for n = 5:
    // fibo(4) + fibo(3)         // 2 + 1 = 3
    // fibo(4) = fibo(3) + fibo(2) // fibo(4) = 1 + 1 = 2
    // fibo(3) = fibo(2) + fibo(1) // fibo(3) = 1 + 0 = 1
    // fibo(2) = fibo(1) + fibo(0) // fibo(2) = 1
}

int main() {
    int n, f;
    cout << "Enter a number: ";
    cin >> n;
    f = fibo(n); // For n = 5, f=3
    cout << "Fibonacci= " << f << endl;
    return 0;
}

