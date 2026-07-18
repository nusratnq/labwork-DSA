#include <stdio.h>

double squareRoot(int n, int precision) {
    int low = 0, high = n, mid;
    double ans = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (mid * mid == n)
            return mid;

        if (mid * mid < n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    double increment = 0.1;

    for (int i = 0; i < precision; i++) {
        while (ans * ans <= n)
            ans += increment;

        ans -= increment;
        increment /= 10;
    }

    return ans;
}

int main() {
    int n, precision;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter precision: ");
    scanf("%d", &precision);

    printf("Square root = %.10f\n", squareRoot(n, precision));

    return 0;
}