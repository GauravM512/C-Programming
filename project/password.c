#include <stdio.h>
#include <unistd.h>

int main() {
    int password, correctpassword = 1234, chances = 3, attempts = 3;

    while (chances > 0) {
        printf("Enter the password: ");
        scanf("%d", &password);

        if (password == correctpassword) {
            printf("Access granted. Welcome!\n");
            break;
        } else {
            attempts--;

            if (attempts > 0) {
                printf("Incorrect password. %d attempts remaining in this chance.\n", attempts);
            } else {
                chances--;
                attempts = 3;

                if (chances > 0) {
                    printf("Incorrect password. %d chances remaining.\n", chances);
                    if (chances == 2) {
                        printf("Timeout for 15 seconds before the next chance.\n");
                        sleep(15); // 15-second timeout
                    } else if (chances == 1) {
                        printf("Timeout for 30 seconds before the final chance.\n");
                        sleep(30); // 30-second timeout
                    }
                } else {
                    printf("Phone Locked. All chances used.\n");
                }
            }
        }
    }

    return 0;
}
