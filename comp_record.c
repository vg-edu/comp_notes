/*University College of Engineering Narasaraopeta, JNTUK - Kakinada**
//JNTUK B.Tech. R23 Regulations**

// COMPUTER PROGRAMMING LAB

// I. Problem-solving using algorithms and Flow charts
// 1. ### Sum and Average of 3 Numbers:
Code:
*/

#include <stdio.h>

int main() {
    // Sum and Average of 3 Numbers
    float num1, num2, num3;

    printf("Enter three numbers separated by spaces: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate sum
    float sum_of_numbers = num1 + num2 + num3;

    // Calculate average
    float average_of_numbers = sum_of_numbers / 3;

    // Display results
    printf("Sum of the numbers: %.2f\n", sum_of_numbers);
    printf("Average of the numbers: %.2f\n", average_of_numbers);

    return 0;
}

Output
```
Enter three numbers separated by spaces: 10 20 30
Sum of the numbers: 60.00
Average of the numbers: 20.00
```


2. ###Conversion of Fahrenheit to Celsius and vice versa:
   Code:
