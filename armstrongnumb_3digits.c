#include <stdlib.h>
#include <stdio.h>
int num, sum, n, r;

int numsum(n) {
    while(n > 0) {
        r = n % 10;         // r contains the last digit
        sum += r*r*r;       // calculates r^3
        n = n / 10;         // deletes the last digit
    }
    return sum;
}


int main() {
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    numsum(n);
    if (sum == num) {
        printf("Armstrong number");
    } else {
        printf("NOT an Armstrong number");
    }

}