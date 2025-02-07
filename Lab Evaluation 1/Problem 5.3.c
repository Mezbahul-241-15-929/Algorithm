#include <stdio.h>

int main() {
    int t;  // Number of test cases
    scanf("%d", &t);

    while (t--) {
        long long int n, k;
        int count = 0;

        // Reading n and k
        scanf("%lld %lld", &n, &k);

        // Process each query
        while (n > 0) {
            if (k == 1) {
                // If k is 1, we can only decrease n by 1
                count += n;
                break;
            }

            if (n % k == 0) {
                // If n is divisible by k, divide n by k
                n /= k;
                count++;
            } else {
                // Reduce n to the nearest number divisible by k
                long long int remainder = n % k;
                n -= remainder;
                count += remainder;
            }
        }

        // Print the result for each test case
        printf("%d\n", count);
    }

    return 0;
}
