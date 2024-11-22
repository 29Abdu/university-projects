#include <stdio.h>

int main() {
    int numbers[10];
    int i, largest, smallest;
    int sum = 0;
    float average;

    // Input 10 numbers
    printf("Enter 10 numbers between 0 and 100: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];  // Calculate sum
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

    // Calculate the average
    average = sum / 10.0;

    // Print the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Average value: %.2f\n", average);

    return 0;
}
