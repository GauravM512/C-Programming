#include <stdio.h>
#include <unistd.h>

int main() {
    
    
    int chances = 3,password=123,attempts = 3,cp;

    printf("Welcome to the Password System\n");

    while (chances > 0)
     {
        printf("You have %d chances .\n", chances);

        for (int i = 0; i < attempts; i++)
         {
            printf("Enter the password: ");
            scanf("%d", &cp);

            if (cp==password) {
                printf("Password correct! Access granted.\n");
                return 0;
            } else {
                printf("Incorrect password. Attempts left: %d\n", attempts - i - 1);
            }
        }

        chances--;

        if (chances > 0) {
            printf("You have exhausted your attempts for this chance wait for 10  seconds\n");
             sleep(10);
        }
       
        else {
            printf("You have no more chances left. Access denied.\n");
        }
    }

    return 0;
}
