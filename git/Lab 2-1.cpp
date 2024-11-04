#include <stdio.h>

int main(void) {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score < 50) {
        printf("Your Grade: F\n");
    } else if (score >= 50 && score < 60) {
        printf("Your Grade: E\n");
    } else if (score >= 60 && score < 70) {
        printf("Your Grade: D\n");
    } else if (score >= 70 && score < 80) {
        printf("Your Grade: C\n");
    } else if (score >= 80 && score <= 100) {
        printf("Your Grade: A\n");
    } else {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        
    }
}
