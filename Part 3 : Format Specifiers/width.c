#include <stdio.h>

int main(){

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n", num3);
    
    printf("-----\n");
    
    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);

    printf("-----\n");
    
    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);
    
    printf("-----\n");

    int num4 = 1;
    int num5 = 10;
    int num6 = -100;
    
    printf("%+d\n", num4);
    printf("%+d\n", num5);
    printf("%+d\n", num6);

    return 0;
}