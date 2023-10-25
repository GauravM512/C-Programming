#include <stdio.h>
#include <ctype.h>

int main() {
    char inputChar;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    if (isalpha(inputChar)) {
        if (isupper(inputChar)) {
            printf("Uppercase alphabet\n");
        } else {
            printf("Lowercase alphabet\n");
        }
    } else if (isdigit(inputChar)) {
        printf("Digit\n");
    } else {
        printf("Special symbol\n");
    }

    return 0;
}
