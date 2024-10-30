#include <stdio.h>

main(void) {
    float height, weight, BMI;

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    BMI = weight / (height * height);

    printf("Your BMI is %.3f\n", BMI);
}
