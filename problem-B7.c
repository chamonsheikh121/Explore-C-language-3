#include <stdio.h>
#include <time.h>

int main()
{
    int a, i;
    clock_t start, end;
    double cpu_time_used;

    scanf("%d", &a);
    start = clock();
    if (a == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (i = 1; i <= a; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
            end = clock();
            cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Time taken: %f seconds\n", cpu_time_used);
        }
    }

    return 0;
}
