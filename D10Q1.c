//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check for a valid triangle
    if (a + b <= c || b + c <= a || a + c <= b) {
        printf("Not a valid triangle.\n");
        return 1;
    }

    // Classify the triangle
    if (a == b && b == c) {
        printf("Triangle is Equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangle is Isosceles.\n");
    } else {
        printf("Triangle is Scalene.\n");
    }

    return 0;
}
