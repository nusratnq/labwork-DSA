#include <stdio.h>

int squareRoot(int n) {
    int low = 0, high = n, mid, ans = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (mid * mid == n)
            return mid;
        else if (mid * mid < n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square root = %d\n", squareRoot(n));

    return 0;
}