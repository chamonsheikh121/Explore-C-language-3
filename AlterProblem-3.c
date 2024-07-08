#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if(97<= a && a<=122)
    {
        char upperCase = a-32;
        printf("%c", upperCase);
    }
    else
    {
        char lowerCase = a + 32;
        printf("%c", lowerCase);
    }

    
    return 0;
}