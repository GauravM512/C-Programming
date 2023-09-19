#include <stdio.h>

int main() {
    int shape, choice;
    printf("1. Cuboid\n");
    printf("2. Cube\n");
    printf("3. Cylinder\n");
    printf("4. Right circular cone\n");
    printf("5. Sphere\n");
    printf("6. Hemisphere\n");
    
    do {
        printf("Enter shape: ");
        scanf("%d", &shape);

        if (shape < 1 || shape > 6) {
            printf("Invalid shape choice.\n");
        }
    } while (shape < 1 || shape > 6);
    

    do {
        printf("1. Total surface area\n");
        if (shape != 5) {
            printf("2. Curved surface area\n");
            printf("3. Volume\n");
        } else {
            printf("2. Volume\n");
        }
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 3) {
            printf("Invalid shape choice.\n");
        }
    } while (choice < 1 || choice > 3);

    float l, b, h, a, r;
    const float pi = 3.14;

    switch (shape) {
        case 1:
            switch (choice) {
                case 1:
                    printf("Enter length, breadth and height: ");
                    scanf("%f %f %f", &l, &b, &h);
                    printf("TSA of cuboid is %.2f", 2 * (l * b + b * h + h * l));
                    break;

                case 2:
                    printf("Enter length, breadth and height: ");
                    scanf("%f %f %f", &l, &b, &h);
                    printf("CSA of cuboid is %.2f", 2 * h * (l + b));
                    break;

                case 3:
                    printf("Enter length, breadth and height: ");
                    scanf("%f %f %f", &l, &b, &h);
                    printf("Volume of cuboid is %.2f", l * b * h);
                    break;
            }
            break;

        case 2:
            switch (choice) {
                case 1:
                    printf("Enter side: ");
                    scanf("%f", &a);
                    printf("TSA of cube is %.2f", 6 * a * a);
                    break;

                case 2:
                    printf("Enter side: ");
                    scanf("%f", &a);
                    printf("CSA of cube is %.2f", 4 * a * a);
                    break;

                case 3:
                    printf("Enter side: ");
                    scanf("%f", &a);
                    printf("Volume of cube is %.2f", a * a * a);
                    break;
            }
            break;

        case 3:
            switch (choice) {
                case 1:
                    printf("Enter radius and height: ");
                    scanf("%f %f", &r, &h);
                    printf("TSA of cylinder is %f", 2 * pi * r * h);
                    break;

                case 2:
                    printf("Enter radius and height: ");
                    scanf("%f %f", &r, &h);
                    printf("CSA of cylinder is %f", 2 * pi * r * (r + h));
                    break;

                case 3:
                    printf("Enter radius and height: ");
                    scanf("%f %f", &r, &h);
                    printf("Volume of cylinder is %f", pi * r * r * h);
                    break;
            }
            break;

        case 4:
            switch (choice) {
                case 1:
                    printf("Enter radius and height: ");
                    scanf("%f %f", &r, &h);
                    printf("TSA of right circular cone is %f", pi * r * (r + h));
                    break;

                case 2:
                    printf("Enter radius and height: ");
                    scanf("%f %f", &r, &h);
                    printf("CSA of right circular cone is %f", pi * r * h);
                    break;

                case 3:
                    printf("Enter radius and height: ");
                    scanf("%f %f", &r, &h);
                    printf("Volume of right circular cone is %f", pi * r * r * h / 3);
                    break;
            }
            break;

        case 5:
            switch (choice) {
                case 1:
                    printf("Enter radius: ");
                    scanf("%f", &r);
                    printf("TSA of sphere is %f", 4 * pi * r * r);
                    break;

                case 2:
                    printf("Enter radius: ");
                    scanf("%f", &r);
                    printf("Volume of sphere is %f", 4 * pi * r * r * r / 3);
                    break;
            }
            break;

        case 6:
            switch (choice) {
                case 1:
                    printf("Enter radius: ");
                    scanf("%f", &r);
                    printf("TSA of hemisphere is %f", 3 * pi * r * r);
                    break;

                case 2:
                    printf("Enter radius: ");
                    scanf("%f", &r);
                    printf("CSA of hemisphere is %f", 2 * pi * r * r);
                    break;

                case 3:
                    printf("Enter radius: ");
                    scanf("%f", &r);
                    printf("Volume of hemisphere is %f", (2 * pi * r * r * r) / 3);
                    break;
            }
            break;
    }

    return 0;
}
