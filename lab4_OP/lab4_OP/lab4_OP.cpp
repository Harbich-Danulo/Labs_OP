#include <stdio.h>
#include <math.h>

void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    //Task 1
    
    int a = 12, b = 5;

    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\nLogical Operators:\n");
    printf("a && b = %d\n", a && b);  
    printf("a || b = %d\n", a || b);  
    printf("!a = %d\n", !a);         

   
    printf("\nBitwise Operators:\n");
    printf("Binary representation of a: ");
    printBinary(a);
    printf("Binary representation of b: ");
    printBinary(b);

    printf("a & b = %d\n", a & b);     
    printf("a | b = %d\n", a | b);    
    printf("a ^ b = %d\n", a ^ b);     
    printf("~a = %d\n", ~a);          
    printf("a << 1 = %d\n", a << 1);   
    printf("a >> 1 = %d\n", a >> 1);   
    





    //Task 2

    /*
    int num;
    int* ptr;

    printf("Enter an integer: ");
    scanf_s("%d", &num);

   
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value accessed through pointer: %d\n", *ptr);
    */
    




    //Task 3
    /*
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root = %.2lf\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
    */
}
