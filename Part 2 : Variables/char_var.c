#include <stdio.h>

int main() {
    char grade = 'A' ;
//  char grade = "A"; --> it's error. Do not use "" for chars
    char symbol = '!' ;
    char currency = '$';
    
    printf("Your grade is %c.\n",grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("Your currenyc is %c\n", currency);
    return 0;

}