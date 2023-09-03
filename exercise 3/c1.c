#include <stdio.h>

int main() {
    int day, month, year,days;

    printf("Enter a date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);


    if (month < 1 || month > 12) {
        printf("Invalid date: Month should be between 1 and 12.\n");
        return 0;
    }

    
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            days = 31;
            break;
    }


    if (day < 1 || day > days) {
        printf("Invalid date: Day should be between 1 and %d for month %d.\n", days, month);
    } else {
        printf("Valid date: %d/%d/%d\n", day, month, year);
    }

    return 0;
}
