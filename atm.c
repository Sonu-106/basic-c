#include <stdio.h>
#include <string.h>

struct atmuser {
    char name[50];
    int pin;
    int CardNumber;
    float balance;
};

struct atmuser user[3] = {
    {"Sonu", 567, 12345, 300000},
    {"monu", 567, 19345, 3000},
    {"Sakti", 587, 12445, 12000},
};

int login(int card, int pin) {
    for (int i = 0; i < 3; i++) {
        if (user[i].CardNumber == card && user[i].pin == pin)
            return i;
    }
    return -1;
}

int main() {
    int card, pin, ui, deposit, withdrawal, new, neww, function;
    float balance;

    printf("XYZ BANK \n");
    printf("please enter your card number : \n");
    scanf("%d", &card);
    printf("please enter your pin : \n");
    scanf("%d", &pin);
    
    ui = login(card, pin);
    if (ui == -1) {
        printf("INVALID PIN OR CARD NUMBER PLEASE TRY AGAIN \n");
        return 0;
    }

    
    balance = user[ui].balance;

    do {
        printf(" Menu \n");
        printf(" 1 for checking the balance \n");
        printf(" 2 for deposit of money \n");
        printf(" 3 for withdrawal of money \n");
        printf(" 4 to exit \n");
    
        scanf("%d", &function);
        switch (function) {
            case 1:
                printf("your balance is : %.2f \n", balance);
                break;
            case 2:
                printf("your balance is : %.2f \n", balance);
                printf("please enter the amount you want to deposit : \n");
                scanf("%d", &deposit);
                balance += deposit; 
                printf("your new balance is %.2f \n", balance);
                break;
            case 3:
                printf("your balance is : %.2f \n", balance);
                printf("please enter the amount you want to withdraw :");
                scanf("%d", &withdrawal);
                if (withdrawal > balance) {
                    printf("you don't have sufficient amount of balance for this withdrawal \n");
                } else {
                    balance -= withdrawal; 
                    printf("you have successfully withdrawn : rs %d \n", withdrawal);
                    printf("you still have balance of rs %.2f \n", balance);
                }
                break;
            case 4:
                printf("thanks for using our service\n");
                break;
            default:
                printf("not a valid function\n");
                break;
        }
    } while (function != 4);

    return 0;
}
