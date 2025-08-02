#include <stdio.h>
int main() {
    int units, slab;
    float Totalbill;

    printf("ELECTRICITY BILL GENRATOR");

    printf("Enter the units consumed");
    scanf("%d", units);

    if(units <= 100){
        slab = 1;
    }  else if(units <= 250){
        slab = 2;
    } else if(units <= 500){
        slab = 3;
    } else{
        slab = 4;
    }
    switch (slab)
    {
    case 1 : Totalbill = units*1.50;
    break;
    
    case 2 : Totalbill = (units*1.50) + (units - 100)*2.50;
    break;
    
    case 3 : Totalbill = (units*1.50) + (150*2.50) + (units - 250)*3.50;
    break;
    case 4 : Totalbill = (units*1.50) + (150*2.50) + ( 250*3.50) + (units - 500)*5.00;
    break;
    
    default: 
    printf(" invalid input \n");
        break;
    }
    printf(" units consumed : %d", units);
printf(" your Electricity bill is : rs %f", Totalbill);
    return 0;
}