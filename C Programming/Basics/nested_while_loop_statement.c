#include <stdio.h>

int main(){

    int num_1,num_2,product;

    num_1 = 1;

    while (num_1 <= 12)
    {
        num_2 = 1;
        while (num_2 <= 12)
        {
            product = num_1 * num_2;
            printf("%i * %i = %i\n", num_1, num_2, product);
            num_2++;
        }
        num_1++;
        printf("\n");
    }
    
}