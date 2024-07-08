#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i, numbers;
    scanf("%d\n", &n);
    int max = INT_MIN, min = INT_MAX;
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &numbers);
        if (numbers > max)
        {
            max = numbers;
        }
        if (numbers < min)
        {
            min = numbers;
        }
    }
    printf("%d\n%d", min,max);
    return 0;
}