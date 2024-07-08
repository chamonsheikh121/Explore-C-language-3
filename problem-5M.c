#include <stdio.h>

int main()
{
    char a = 'z';
    scanf("%c", &a);
    if (a >= 48 && a <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (a >= 65 && a <= 90)
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }
    return 0;
}