#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients (A, B, and C) of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf and Root 2 = %.2lf\n", root1, root2);
    } 
    else if (discriminant == 0)
    {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi and Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
