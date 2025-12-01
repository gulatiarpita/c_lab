#include <stdio.h>

int main() {
    int L;
    printf("Enter the limit (for cube values): ");
    scanf("%d", &L);

    printf("\nRamanujan Numbers within cube limit %d:\n", L);

    for (int a = 1; a <= L; a++) {
        for (int b = a + 1; b <= L; b++) {
            int sum1 = a*a*a + b*b*b;

            for (int c = 1; c <= L; c++) {
                for (int d = c + 1; d <= L; d++) {
                    int sum2 = c*c*c + d*d*d;

                
                    if (sum1 == sum2 && !(a == c && b == d)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
