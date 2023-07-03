#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 100

bool isPalindrome(int x){
    int size = 0;
    char *num1 = (char*)malloc(sizeof(char)*SIZE);
    char *num2 = (char*)malloc(sizeof(char)*SIZE);

    sprintf(num1, "%d", x);
    //itoa(x, num1, 10);
    size = strlen(num1);
    for (int i = size-1, j = 0 ; i >= 0 ; i--, j++)
        num2[j] = num1[i];
    num2[size] = '\0';
    if (strcmp(num1, num2) == 0)
        return true;
    return false;
}

int main () {
    int x = 121;

    if (isPalindrome(x)) 
        printf("%d its a palindrome", x);
    else    
        printf("%d its not a palindrome", x);
}