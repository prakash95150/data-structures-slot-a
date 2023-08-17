#include <stdio.h>

int main() {
    int num, count, i;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &count);

    printf("Enter %d numbers:\n", count);
    for (i = 1; i <= count; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is an even number.\n", num);
        } else {
            printf("%d is an odd number.\n", num);
        }
    }

    return 0;
}
