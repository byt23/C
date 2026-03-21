#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = false; // %10 indirim
    bool isSenior = false; // %20 indirim


    if(isStudent){
        if(isSenior){
        printf("You get a student and senior discount of 30%%\n");
        price = price * 0.7;
        }
        else{
        printf("You get a student discount of 10%%\n");
        price = price * 0.9;
        }
    }

    else if(isSenior){
        printf("You get a senior discount of 20%%\n");
        price = price * 0.8;
    }   

    printf("The price of a ticket is $%.2f",price);

    return 0;
}