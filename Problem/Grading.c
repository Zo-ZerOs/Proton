#include <stdio.h>

int main() {
    // Grading
    // The student will receive the grade based on their score.
    // Score 0 - 49 (Grade F)
    // Score 50 - 59 (Grade D)
    // Score 60 - 69 (Grade C)
    // Score 70 - 79 (Grade B)
    // Score 80 - 100 (Grade A)
    // Please make the progame which input is the score(integer) and the output is the grade(char).
  
    int score;
    scanf("%d", &score);
    if ((score >= 0) && (score <= 49)) printf("F");
    else if ((score >= 50) && (score <= 59)) printf("D");
    else if ((score >= 60) && (score <= 69)) printf("C");
    else if ((score >= 70) && (score <= 79)) printf("B");
    else printf("A");
    
    return 0;
}










