#include <stdio.h>
#include <math.h>

// Calculator Program

int main(){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number : ");
    scanf("%lf",&num1);
    
    printf("Enter the operator (+ - x /) : ");
    scanf(" %c",&operator); // clear \n from input buffer

    printf("Enter the second number : ");
    scanf("%lf",&num2);

    switch (operator){
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case 'x':
        result = num1 * num2;;
        break;
    case '/':
        if(num2 == 0){
            printf("You cannot divide by 0!\n");
        }
        else {
            result = num1 / num2;
        }
        break;
    default:
        printf("Invalid Operator\n");
        break;
    
    }
    
    printf("Result : %.2lf", result);

    return 0;
}