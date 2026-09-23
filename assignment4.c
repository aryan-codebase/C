#include <stdio.h>

int main()
{
    int n, original, digit;
    int reverse = 0, sum = 0;
    int isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Find reverse and sum of digits
    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        sum = sum + digit;
        n = n / 10;
    }

    // Display reverse and sum
    printf("\nReverse of number = %d\n", reverse);
    printf("Sum of digits = %d\n", sum);

    // Palindrome check
    if(original == reverse)
    {
        printf("The number is a Palindrome.\n");
    }
    else
    {
        printf("The number is not a Palindrome.\n");
    }

    // Prime number check
    if(original <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for(int i = 2; i <= original / 2; i++)
        {
            if(original % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime == 1)
    {
        printf("The number is Prime.\n");
    }
    else
    {
        printf("The number is not Prime.\n");
    }

    return 0;
}