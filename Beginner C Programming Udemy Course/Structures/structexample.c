#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int main(void) {
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i, %i, %i", datePtr->month, datePtr->day, datePtr->year);

    return 0;
}