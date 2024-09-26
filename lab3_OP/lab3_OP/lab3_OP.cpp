#include <stdio.h>
#include <stdlib.h>

int main() {
    // Task 1
    printf("Task 1 \nhello, world\n");

    // Task 2
    char str[] = "Something";
    printf("Task 2 \n%s\n", str);

    // Task 3
    int number = 11;
    printf("Task 3 \nFormat output: %s, number: %d\n", str, number);

    // Task 4
    char inputString[100];
    printf("Task 4 \nInput symbols: ");
    scanf_s("%s", inputString, _countof(inputString));
    printf("You inputed: %s\n", inputString);


}