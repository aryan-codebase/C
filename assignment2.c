#include <stdio.h>

int main()
{
    int choice;
    int num, a, b, c;
    float x, y, result;

    printf("===== CONDITIONAL STATEMENTS PROGRAM =====\n");

    printf("\n1. Check Positive, Negative or Zero");
    printf("\n2. Check Even or Odd");
    printf("\n3. Find Largest Among Three Numbers");
    printf("\n4. Simple Calculator");
    printf("\n5. Exit");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter a number: ");
            scanf("%d", &num);

            if(num > 0)
                printf("Number is Positive.\n");
            else if(num < 0)
                printf("Number is Negative.\n");
            else
                printf("Number is Zero.\n");

            break;

        case 2:
            printf("\nEnter a number: ");
            scanf("%d", &num);

            if(num % 2 == 0)
                printf("Number is Even.\n");
            else
                printf("Number is Odd.\n");

            break;

        case 3:
            printf("\nEnter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            if(a >= b && a >= c)
                printf("Largest number = %d\n", a);
            else if(b >= a && b >= c)
                printf("Largest number = %d\n", b);
            else
                printf("Largest number = %d\n", c);

            break;

        case 4:
            printf("\nEnter first number: ");
            scanf("%f", &x);

            printf("Enter second number: ");
            scanf("%f", &y);

            printf("\n1. Addition");
            printf("\n2. Subtraction");
            printf("\n3. Multiplication");
            printf("\n4. Division");

            printf("\n\nEnter operation: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    result = x + y;
                    printf("Result = %.2f\n", result);
                    break;

                case 2:
                    result = x - y;
                    printf("Result = %.2f\n", result);
                    break;

                case 3:
                    result = x * y;
                    printf("Result = %.2f\n", result);
                    break;

                case 4:
                    if(y != 0)
                    {
                        result = x / y;
                        printf("Result = %.2f\n", result);
                    }
                    else
                    {
                        printf("Division by zero is not allowed.\n");
                    }
                    break;

                default:
                    printf("Invalid operation.\n");
            }

            break;

        case 5:
            printf("\nProgram exited.\n");
            break;

        default:
            printf("\nInvalid choice.\n");
    }

    return 0;
}