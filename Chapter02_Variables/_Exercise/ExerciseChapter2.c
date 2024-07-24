#include <stdio.h>
#include <stdio.h>

int main()
{
    u_int64_t age;
    u_int64_t days;
    u_int64_t hours;
    u_int64_t minutes;
    u_int64_t seconds;

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
