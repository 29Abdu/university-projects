#include <stdio.h>

void main(){
    float gpa=0;
    printf("Please enter your GPA: \n");
    scanf("%f", &gpa);
    
    printf("Your GPA out of 100 is: %4.1f%%\n", gpa/4*100);
}