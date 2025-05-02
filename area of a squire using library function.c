#include <stdio.h>
#include <math.h>  // Required for the 'pow' function

// Function to calculate area of a square
float areaOfSquare(float side) {
    return pow(side, 2);  // pow(base, exponent) from math.h
}

int main() {
    float side;

    // Input side length from user
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate and display area
    printf("Area of the square = %.2f\n", areaOfSquare(side));

    return 0;
}
