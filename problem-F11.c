#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=12; i++ )
    {
        int multiple = n * i;
        printf("%d * %d = %d\n", n,i,multiple);
    }
    return 0;
}