#include <stdio.h>

int factorial_recursion(int num, int t_factorial)
{
    t_factorial = t_factorial * num;
    num--;
    if (num == 0)
        return t_factorial;
    else
        factorial_recursion(num, t_factorial);
}
int main()
{
    int num, t_factorial = 1;
    printf("Enter a num ");
    scanf("%d", &num);
    printf("Factorial %d", factorial_recursion(num,t_factorial));
}
