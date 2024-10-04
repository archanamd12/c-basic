#include <stdio.h>

 

int reverseNumber(int num) {
    int s[10];
    int top = -1;

    
    while (num > 0) {
        s[++top] = num % 10;
        num /= 10;
    }

    
    int reversedNum = 0;
    int place = 1;
    while (top >= 0) {
        reversedNum += s[top--] * place;
        place *= 10;
    }

    return reversedNum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversedNum = reverseNumber(num);

    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}
