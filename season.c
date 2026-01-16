#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        
        case 11:
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;

        
        case 3:
        case 4:
        case 5:
            printf("Summer\n");
            break;

        
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Rainy Season\n");
            break;

        default:
            printf("Invalid month\n");
    }

    return 0;
}
