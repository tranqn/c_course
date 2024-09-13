#include <stdio.h>

void print_question()
{
    printf("Please enter a valid unsigned integer!\n");
}

int get_number_from_user()
{
    int input = 0;

    scanf("%d", &input);
    return input;
}

int div_3(int number)
{
    if(number % 3 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print_solution(int number, int input)
{
    if(number == 1)
    {
        printf("The number you entered can div. by 3\n");
    }
    else
    {
        printf("The number you entered is not div. by 3\n");
        printf("The remainder of the operation is: %d\n", input % 3);
    }
}

int main()
{
    print_question();

    int input = get_number_from_user();

    print_solution(div_3(input),input);

    return 0;
}
