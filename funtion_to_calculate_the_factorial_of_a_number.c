#include <stdio.h>

int calculate_factorial(int num)
{
    int total_factorial;
    do
    {
        total_factorial = total_factorial * num;
        num--;
    } while (num == 0);
    return total_factorial;
}
int main()
{
    int factorial_num_in, factorial_calculated;
    printf("Enter the number to calculate the factorial of: ");
    scanf("%d", &factorial_num_in);
    factorial_calculated = calculate_factorial(factorial_num_in);
    printf("Factorial of: %d is : %d", factorial_num_in, factorial_calculated);
    return 0;
}
