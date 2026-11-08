#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;

    scanf("%d", &number);

    if (number < 0)
    {
        printf("Error");
        return 0;
    }
    if (number == 0)
    {
        printf("No");
        return 0;
    }

    if (number % 3 == 0)
    {
        printf("Up");
        count++;
    }
    if (number % 5 == 0)
    {
        printf("Go");
        count++;
    }
    if (number % 7 == 0)
    {
        printf("!!");
        count++;
    }
    if (count == 0)
    {
        printf("No");
    }

    return 0;
}
