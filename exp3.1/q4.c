#include <stdio.h>

int main() {
    int year, i, day = 1; 
    
    printf("Enter the year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            day = (day + 2) % 7; 
        else
            day = (day + 1) % 7; 
    }

    printf("1st January %d is: ", year);

    switch(day) {
        case 0: printf("Sunday"); break;
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
    }

    return 0;
}
