//Simple c program (Juliet Wanyingi)
/*
Name: Juliet
Reg no:CT101/G/26486/25
Date:29/9/2025
Description:mobile data bundles program 

*/
#include <stdio.h>

int main() {
    int choice;

    // prompt the user to display the menu
    printf("Mobile Data Bundles:\n");
    printf("1. 100 MB - 50 KES\n");
    printf("2. 500 MB - 200 KES\n");
    printf("3. 1 GB - 350 KES\n");
    printf("4. 2 GB - 600 KES\n");

    // prompt the user to enter choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Switch to determine selection
    switch (choice) {
        case 1:
            printf("You selected 100 MB - Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected 500 MB - Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1 GB - Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected 2 GB - Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
    