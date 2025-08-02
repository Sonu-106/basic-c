#include <stdio.h>

int main() {
    int a, b, c, sum;
    printf("Enter the marks of Science: ");
    scanf("%d", &a);
    printf("Enter the marks of Maths: ");
    scanf("%d", &b);
    printf("Enter the marks of English: ");
    scanf("%d", &c);
    
    sum = a + b + c;
    printf("You have scored: %d \n", sum);
    
    if (sum > 200) {
        printf("You are eligible for CSE diploma with this marks: %d \n", sum);
    } else if (sum >= 180) {
        printf("You are eligible for Civil Eng diploma with this marks: %d \n", sum);
    } else if (sum >= 150) {
        printf("You are eligible for Mechanical Eng diploma with this marks: %d \n", sum);
    } else if (sum >= 130) {
        printf("You are eligible for Electrical Eng diploma with this marks: %d \n", sum);
    } else {
        printf("You are not eligible for Eng diploma with this marks: %d \n", sum);
    }
    
    return 0;
}
