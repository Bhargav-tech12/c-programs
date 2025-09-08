#include <stdio.h>

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Sum = %d\n", a+b); break;
        case 2: printf("Difference = %d\n", a-b); break;
        case 3: printf("Product = %d\n", a*b); break;
        case 4: 
            if(b != 0) printf("Quotient = %d\n", a/b); 
            else printf("Division by zero!\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
