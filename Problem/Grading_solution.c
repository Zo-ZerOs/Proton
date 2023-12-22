#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    if ((score >= 0) && (score <= 49)) printf("F");
    else if ((score >= 50) && (score <= 59)) printf("D");
    else if ((score >= 60) && (score <= 69)) printf("C");
    else if ((score >= 70) && (score <= 79)) printf("B");
    else printf("A");
    
    return 0;
}










