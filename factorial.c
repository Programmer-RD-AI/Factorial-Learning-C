#include <stdio.h>
int main()
{
    int n, tot = 1;
    int mark = 0;
    float avg;
    do
    {
        printf("Enter Marks : ");
        scanf("%d", &mark);
        tot = tot + mark;

    } while (n <= 10);
    avg = tot / 10.0;
    printf("%d", avg);
}
