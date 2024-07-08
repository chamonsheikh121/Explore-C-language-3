#include <stdio.h>

int main()
{
    int a = 10;
    a++;
    ++a;
    a--;
    --a;
    printf("a-%d\n", a);
    //type of a++,++a,a--, --a to assign a variable value
    int x = a++;
    printf("x-%d x-%d\n", x, a);
    a--; // assign to normal value of a = 10;
    x = ++a;
    printf("x-%d x-%d\n", x, a);
    a--; // assign to normal value of a = 10;
    x = a--;
    printf("x-%d x-%d\n", x, a);
    a++; // assign to normal value of a = 10;
    x = --a;
    printf("x-%d x-%d\n", x, a);
    return 0;
}