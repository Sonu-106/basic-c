#include <stdio.h>

void pre(int s, int m, int e, int g, int ss, int sa);
void in(int s, int m, int e, int g, int ss, int sa);
void gr(int s, int m, int e, int g, int ss, int sa);

int main() {
    int s, m, e, g, ss, sa;
    printf("RESULT CALCULATOR \n");
    printf("Please enter the marks of science: \n");
    scanf("%d", &s);
    printf("Please enter the marks of maths: \n");
    scanf("%d", &m);
    printf("Please enter the marks of English: \n");
    scanf("%d", &e);
    printf("Please enter the marks of Gujarati: \n");
    scanf("%d", &g);
    printf("Please enter the marks of S.S: \n");
    scanf("%d", &ss);
    printf("Please enter the marks of Sanskrit: \n");
    scanf("%d", &sa);

    in(s, m, e, g, ss, sa);
    pre(s, m, e, g, ss, sa);
    gr(s, m, e, g, ss, sa);

    return 0;
}

void in(int s, int m, int e, int g, int ss, int sa) {
    int h = s + m + e + g + ss + sa;
    printf("You have got %d / 600 marks \n", h);
}

void pre(int s, int m, int e, int g, int ss, int sa) {
    int total = s + m + e + g + ss + sa;
    float percentage = (float)total / 600 * 100; // Corrected calculation
    printf("You have scored %.2f percentage \n", percentage); // Changed to float for better precision
}

void gr(int s, int m, int e, int g, int ss, int sa) {
    int total = s + m + e + g + ss + sa;
    float percentage = (float)total / 600 * 100; // Corrected calculation
    if (percentage >= 80) {
        printf("You have passed with A+ grade\n");
    } else if (percentage >= 70) {
        printf("You have passed with A grade\n");
    } else if (percentage >= 50) {
        printf("You have passed with C grade\n");
    } else if (percentage >= 35) {
        printf("You have passed with D grade\n");
    } else {
        printf("You have failed\n");
    }
}
