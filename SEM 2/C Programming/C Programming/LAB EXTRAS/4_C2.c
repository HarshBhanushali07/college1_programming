#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t1, t2, sum;

    printf("Enter the first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter the second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);

    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = sum.seconds / 60;
    sum.seconds = sum.seconds % 60;

    sum.minutes = sum.minutes + t1.minutes + t2.minutes;
    sum.hours = sum.minutes / 60;
    sum.minutes = sum.minutes % 60;

    sum.hours = sum.hours + t1.hours + t2.hours;

    printf("Sum of the times: %d:%d:%d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}

