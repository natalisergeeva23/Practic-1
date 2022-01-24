#include<stdio.h>

int main(void)
{
    int a;
    printf("printed characters ASCII\n");
    printf("symbol number\tsymbol\t\n");
    a = 0;
    while (a <= 255)
    {
        printf("%d = %c\n", a, a);
        a++;
    }
    return 0;
}
