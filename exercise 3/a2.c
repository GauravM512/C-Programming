// Write a program, which accepts two integers and an operator as a character (+ - * /),
// performs the corresponding operation and displays the result. 

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two integers: ");
    scanf("%d %d", &a,&b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}
