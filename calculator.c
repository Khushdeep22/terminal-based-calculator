#include <stdio.h>
#include <math.h>

// Function declarations
void showMenu();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void squareRoot();

int main() {
    int choice;

    printf("=====================================\n");
    printf("       TERMINAL-BASED CALCULATOR\n");
    printf("=====================================\n");

    while (1) {

        showMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addition();
                break;

            case 2:
                subtraction();
                break;

            case 3:
                multiplication();
                break;

            case 4:
                division();
                break;

            case 5:
                modulus();
                break;

            case 6:
                power();
                break;

            case 7:
                squareRoot();
                break;

            case 8:
                printf("\nThank you for using the calculator!\n");
                printf("Exiting...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

        printf("\n-------------------------------------\n");
    }

    return 0;
}

// Display calculator menu
void showMenu() {

    printf("\n");
    printf("------------- MENU ------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Square Root\n");
    printf("8. Exit\n");
    printf("-------------------------------------\n");
}

// Addition
void addition() {

    double a, b;

    printf("\nEnter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Result = %.2lf\n", a + b);
}

// Subtraction
void subtraction() {

    double a, b;

    printf("\nEnter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Result = %.2lf\n", a - b);
}

// Multiplication
void multiplication() {

    double a, b;

    printf("\nEnter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Result = %.2lf\n", a * b);
}

// Division
void division() {

    double a, b;

    printf("\nEnter numerator: ");
    scanf("%lf", &a);

    printf("Enter denominator: ");
    scanf("%lf", &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } 
    else {
        printf("Result = %.2lf\n", a / b);
    }
}

// Modulus
void modulus() {

    int a, b;

    printf("\nEnter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Modulus by zero is not allowed.\n");
    } 
    else {
        printf("Result = %d\n", a % b);
    }
}

// Power
void power() {

    double base, exponent;

    printf("\nEnter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    printf("Result = %.2lf\n", pow(base, exponent));
}

// Square root
void squareRoot() {

    double number;

    printf("\nEnter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Error: Square root of a negative number is not real.\n");
    } 
    else {
        printf("Square Root = %.2lf\n", sqrt(number));
    }
}