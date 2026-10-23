
#include <stdio.h>
#include <time.h>

int main(void) {
    int choice, n, i, prime;
    int operation;
    double a, b, celsius, km;
    time_t now;

    do {
        printf("\n====================================\n");
        printf("       HELPMATE SOFTWARE\n");
        printf("      Multi-Utility Program\n");
        printf("====================================\n");
        printf("1. Calculator\n");
        printf("2. Check Even or Odd\n");
        printf("3. Check Prime Number\n");
        printf("4. Celsius to Fahrenheit\n");
        printf("5. Kilometers to Meters\n");
        printf("6. Current Date and Time\n");
        printf("7. Exit\n");
        printf("====================================\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Invalid numbers!\n");
                    return 1;
                }

                printf("\n1. Addition\n");
                printf("2. Subtraction\n");
                printf("3. Multiplication\n");
                printf("4. Division\n");
                printf("Choose operation: ");

                if (scanf("%d", &operation) != 1) {
                    printf("Invalid operation!\n");
                    return 1;
                }

                switch (operation) {
                    case 1:
                        printf("Result = %.2f\n", a + b);
                        break;
                    case 2:
                        printf("Result = %.2f\n", a - b);
                        break;
                    case 3:
                        printf("Result = %.2f\n", a * b);
                        break;
                    case 4:
                        if (b == 0)
                            printf("Error: Cannot divide by zero!\n");
                        else
                            printf("Result = %.2f\n", a / b);
                        break;
                    default:
                        printf("Invalid operation!\n");
                }
                break;

            case 2:
                printf("Enter an integer: ");
                if (scanf("%d", &n) != 1) {
                    printf("Invalid input!\n");
                    return 1;
                }

                if (n % 2 == 0)
                    printf("%d is Even.\n", n);
                else
                    printf("%d is Odd.\n", n);
                break;

            case 3:
                printf("Enter an integer: ");
                if (scanf("%d", &n) != 1) {
                    printf("Invalid input!\n");
                    return 1;
                }

                prime = 1;

                if (n < 2)
                    prime = 0;

                for (i = 2; i <= n / i && prime; i++) {
                    if (n % i == 0)
                        prime = 0;
                }

                if (prime)
                    printf("%d is a Prime Number.\n", n);
                else
                    printf("%d is not a Prime Number.\n", n);
                break;

            case 4:
                printf("Enter temperature in Celsius: ");
                if (scanf("%lf", &celsius) != 1) {
                    printf("Invalid temperature!\n");
                    return 1;
                }

                printf("Fahrenheit = %.2f\n",
                       (celsius * 9.0 / 5.0) + 32.0);
                break;

            case 5:
                printf("Enter distance in kilometers: ");
                if (scanf("%lf", &km) != 1) {
                    printf("Invalid distance!\n");
                    return 1;
                }

                printf("Meters = %.2f\n", km * 1000.0);
                break;

            case 6:
                now = time(NULL);
                printf("Current date and time: %s", ctime(&now));
                break;

            case 7:
                printf("\nThank you for using Helpmate!\n");
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}
