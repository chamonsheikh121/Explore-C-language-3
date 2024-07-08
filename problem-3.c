#include <stdio.h>
#include <ctype.h>

int main()
{
    int a;
    scanf("%c", &a);
    if (isupper(a))
    {
        char answer = tolower(a);
        printf("%c", answer);
    }
    else
    {
        char answer = toupper(a);
        printf("%c", answer);
    }
    return 0;
}