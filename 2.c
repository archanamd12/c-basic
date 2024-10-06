#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

int checkParentheses(char* expression) {
    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            char last = pop();
            if ((ch == ')' && last != '(') ||
                (ch == ']' && last != '[') ||
                (ch == '}' && last != '{')) {
                return 0;  // Mismatch
            }
        }
    }
    return top == -1;  // 1 if all matched, 0 if not
}

int main() {
    char expression[MAX];
    printf("Enter an expression: ");
    fgets(expression, MAX, stdin);

    // Remove newline character
    expression[strcspn(expression, "\n")] = '\0';

    if (checkParentheses(expression)) {
        printf("Parentheses are matched.\n");
    } else {
        printf("Parentheses are not matched.\n");
    }

    return 0;
}
