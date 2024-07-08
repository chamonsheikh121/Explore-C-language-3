#include <stdio.h>

int main()
{
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    int total;
    scanf("%d\n", &total);
    int a;
    for (int i = 1; i <= total; i++)
    {
         
        scanf("%d", &a);
        // printf("%d\n",a);
        if (a % 2 == 0)
        {
            even++;
            if (a > 0)
            {
                positive++;
            }
            else if (a < 0)
            {
                negative++;
            }
        }

        else
        {
            if (a % 2 != 0)
            {
                odd++;
                if (a > 0)
                {
                    positive++;
                }
                else if (a < 0)
                {
                    negative++;
                }
            }
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
}