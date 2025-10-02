//Simple c program (Juliet Wanyingi)
/*
Name: Juliet
Reg no:CT101/G/26486/25
Date:29/9/2025
Description:exam eligibility program 

*/
#include <stdio.h>

int main() {
    float attendance, avgMarks;

    // prompt the user to enter attendance percentage 
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    
//prompt the user to enter average marks
    printf("Enter average marks: ");
    scanf("%f", &avgMarks);

    // Check eligibility
    if (attendance >= 75 && avgMarks >= 40) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}
    