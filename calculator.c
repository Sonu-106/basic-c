#include <stdio.h>

int main() {
    char function;
    int a, b, r;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Please select a function (a for add, s for sub, m for multi, d for div): ");
    scanf("%c", &function);

    switch (function) {
        case 'a': // Add
            r = a + b;
            printf("Sum of numbers: %d\n", r);
            break;

        case 's': // Subtract
            r = a - b;
            printf("Difference of numbers: %d\n", r);
            break;

        case 'm': // Multiply
            r = a * b;
            printf("Product of numbers: %d\n", r);
            break;

        case 'd': // Divide
            if (b != 0) {
                r = a / b;
                printf("Quotient of numbers: %d\n", r);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Not a valid function.\n");
            break;
    }

    return 0;
}
