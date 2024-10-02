#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Example of using basic format specifiers
    int num = 255;
    float fnum = 123.456;
    char character = 'A';
    const char* str = "Hello, World!";
    void* ptr = &num;

    // Output integer in various formats
    printf("Decimal format: %d\n", num);
    printf("Octal format: %o\n", num);
    printf("Hexadecimal format: %x\n", num);

    // Binary format (manually printed)
    printf("Binary format: ");
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    // Output floating-point number in various formats
    printf("Floating-point format: %f\n", fnum);
    printf("Exponential format: %e\n", fnum);
    printf("Flexible format: %g\n", fnum);

    // Output character, string, and pointer
    printf("Character: %c\n", character);
    printf("String: %s\n", str);
    printf("Pointer: %p\n", ptr);

    // Input and output of multiple strings (table)
    int n;
    printf("\nEnter the number of students: ");
    scanf_s("%d", &n); // scanf_s used here
    getchar();  // Reads the leftover newline after entering the number

    // Dynamically allocate memory for the arrays
    char** names = (char**)malloc(n * sizeof(char*));
    char** emails = (char**)malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        names[i] = (char*)malloc(50 * sizeof(char));
        emails[i] = (char*)malloc(50 * sizeof(char));
       

        printf("\nStudent %d\n", i + 1);
        printf("Enter name and initials: ");
        fgets(names[i], 50, stdin);

        printf("Enter email: ");
        fgets(emails[i], 50, stdin);

      
    }

    // Output formatted table
    printf("\n%-5s %-30s %-30s\n", "No", "Name, Initials", "Email");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        // Remove newline after input
        names[i][strcspn(names[i], "\n")] = 0;
        emails[i][strcspn(emails[i], "\n")] = 0;
       

        printf("%-5d %-30s %-30s\n", i + 1, names[i], emails[i]);

        // Free allocated memory for each student entry
        free(names[i]);
        free(emails[i]);
       
    }

    // Free the main arrays
    free(names);
    free(emails);

}
