#include <stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

int main() {
    int a, b, fun;
   do
   {
    
    printf("Please enter first number: \n");
    scanf("%d", &a);

    printf("Please enter second number: \n");
    scanf("%d", &b);

    printf("Please select a function from below: \n");
    printf("1 for addition \n");
    printf("2 for subtraction \n");
    printf("3 for multiplication \n");
    printf("4 for division \n");
    scanf("%d", &fun);

    switch (fun) {
        case 1: 
            add(a, b);
            break;
        case 2: 
            sub(a, b);
            break;
        case 3: 
            mul(a, b);
            break;
        case 4: 
            div(a, b);
            break;
            case 5 :
            printf("thanks for using calculator") ;
            break;
        default: 
            printf("The function you have entered is not valid.\n");
            break;
    } 
      } while (fun != 5 );
    return 0;
}

void add(int a, int b) {
    int x = a + b;
    printf("Addition of your given two numbers is: %d \n", x);
}

void sub(int a, int b) {
    int z = a - b;
    printf("Subtraction of your given two numbers is: %d \n", z);
}

void mul(int a, int b) { 
    int m = a * b;
    printf("Multiplication of your given two numbers is: %d \n", m);
}

void div(int a, int b) {
    if (b != 0) {
        int d = a / b;
        printf("Division of your given two numbers is: %d \n", d);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
