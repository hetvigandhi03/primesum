#include <stdio.h>
int chckPr(int a);
int main() {
    int a, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &a);

    for (i = 2; i <= a / 2; ++i) {

        if (chckPr(i) == 1) {

            if (chckPr(a - i) == 1) {
                printf("%d = %d + %d\n", a, i, a - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.", a);

    return 0;
}


int chckPr(int a) {
    int i, isPr = 1;
    for (i = 2; i <= a / 2; ++i) {
        if (a % i == 0) {
            isPr = 0;
            break;
        }
    }
    return isPr;
}



