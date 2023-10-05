#include <stdio.h>

int main() {
    // Using a for loop to print numbers from 1 to 10
    printf("Using for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    
    // Using a while loop to print numbers from 1 to 10
    printf("\nUsing while loop:\n");
    int j = 1;
    while (j <= 10) {
        printf("%d ", j);
        j++;
    }
    
    // Using a do-while loop to print numbers from 1 to 10
    printf("\nUsing do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 10);
    
    printf("\n");
    return 0;
}
