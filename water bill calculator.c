//Simple c program (Juliet Wanyingi)
/*
Name: Juliet
Reg no:CT101/G/26486/25
Date:29/9/2025
Description:water bill calculator program 

*/
#include <stdio.h>

int main() {
    int units;
    float bill;
    
//prompt the user to enter water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);
    
//check eligibility 
    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = units * 25.0;
    } else {
        bill = units * 30.0;
    }

    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
    