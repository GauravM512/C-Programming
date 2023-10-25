#include <stdio.h>
#include <ctype.h>

int main() {
    char inputChar;
    int alphabetCount = 0;
    int digitCount = 0;

    printf("Enter characters (type '$' to end): ");

    while (1) {
        scanf(" %c", &inputChar);

        if (inputChar == '$') {
            break;
        }

        if (isalpha(inputChar)) {
            alphabetCount++;
        } else if (isdigit(inputChar)) {
            digitCount++;
        }
    }

    printf("Total alphabets entered: %d\n", alphabetCount);
    printf("Total digits entered: %d\n", digitCount);

    return 0;
}
