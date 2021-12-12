#include <stdio.h>

int main()
{
    int n, iter_n, iter_iter;
    printf("Num of lines : ");
    scanf("%d", &n);
    for (iter_n = 0; iter_n == n; iter_n++)
    {
        for (iter_iter = 0; iter_iter <= iter_n; iter_iter++)
        {
            printf("*");
            iter_iter++;
        }
        printf("\n");
        iter_n += 1;
    }
}
