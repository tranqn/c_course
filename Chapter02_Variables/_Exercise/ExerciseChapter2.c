#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t age;
    uint64_t days;
    uint64_t hours;
    uint64_t minutes;
    uint64_t seconds;

    printf("Please enter your age in years: ");
    scanf("%llu/n", &age);

    days = age * 365;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    printf("You are living since %llu days\n", days);
    printf("You are living since %llu hours\n", hours);
    printf("You are living since %llu minutes\n", minutes);
    printf("You are living since %llu seconds\n", seconds);

    return 0;
}
