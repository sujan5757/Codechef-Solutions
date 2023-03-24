#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100000

// Function to check if a given character is a valid opening bracket
int is_opening_bracket(char c) {
    return (c == '(' || c == '{' || c == '[');
}

// Function to check if a given character is a valid closing bracket
int is_closing_bracket(char c) {
    return (c == ')' || c == '}' || c == ']');
}

// Function to check if a given pair of brackets are matching or not
int are_matching_brackets(char opening, char closing) {
    return ((opening == '(' && closing == ')') ||
            (opening == '{' && closing == '}') ||
            (opening == '[' && closing == ']'));
}

// Function to check if a given string is a beautiful string of parentheses or not
int is_beautiful_string(char *str) {
    int len = strlen(str);
    char *stack = (char *) malloc(len * sizeof(char));  // stack to store opening brackets
    int top = -1;  // index of top element of stack, initialized to -1
    for (int i = 0; i < len; i++) {
        if (is_opening_bracket(str[i])) {  // push opening brackets onto stack
            stack[++top] = str[i];
        } else if (is_closing_bracket(str[i])) {  // check if closing bracket matches the top of the stack
            if (top == -1 || !are_matching_brackets(stack[top], str[i])) {
                free(stack);
                return 0;  // not beautiful string
            } else {
                top--;  // pop the top element from the stack
            }
        }
    }
    free(stack);
    return (top == -1);  // beautiful string if stack is empty at the end
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char str[MAX_LEN];
        scanf("%s", str);
        if (is_beautiful_string(str)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}
