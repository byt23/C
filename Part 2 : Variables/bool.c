#include <stdio.h> //preprocessor directive
#include <stdbool.h> // bool kullanırken bu headerfile'ı yazmamız lazım

int main(){ // main function

    bool isOnline = true ;

    if(isOnline){
        printf("You are ONLINE.");
    }
    else {
        printf("You are OFFLINE.");
    }

    return 0;
}