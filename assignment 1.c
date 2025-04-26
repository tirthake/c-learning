#include <stdio.h>

#define SIZE 10

int main() {
    double numbers[SIZE];
    double largest;
    int i;

    printf("enter 10 numbers:\n");

                             //  numbers from user
    for (i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%lf", &numbers[i]);
    }

                               // Assume  largest initially
    largest = numbers[0];

                        // Compare
    for (i = 1; i < SIZE; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("\n the largest number is: %.2f\n", largest);

    return 0;
}
