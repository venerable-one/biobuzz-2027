#include <stdio.h>

int main(){
    int choice;

    choice  = 6;

    switch(choice) {
        case 1:
            printf("You selected option 1.\n");
            break;
        case 2:
            printf("You selected option 2.\n");
            break;
        case 3:
            printf("You selected option 3.\n");
            break;
        default:
            printf("Invalid selection.\n");
    }
}