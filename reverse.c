#include <stdio.h>

int reverseNumber(int n, int reverse)
{
    if (n == 0)
        return reverse;

    return reverseNumber(n / 10, reverse * 10 + n % 10);
}

int main()
{
    int n, reversed;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    reversed = reverseNumber(n, 0);

    printf("Reversed number = %d\n", reversed);

    return 0;
}