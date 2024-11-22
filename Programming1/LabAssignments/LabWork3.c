#include <stdio.h>

int main() {
    int numbers[10];
    int i, largest, smallest;

    // Input 10 numbers 
    printf("Enter 10 numbers: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = smallest = numbers[0];

    // Loop to find the largest and smallest numbers
    for (i = 1; i < 10; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Print the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}