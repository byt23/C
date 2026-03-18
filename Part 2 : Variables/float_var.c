#include <stdio.h> // preprocessor directive

int main() { // main function

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;


    printf("Your gpa is %.1f.\n", gpa);
    printf("The price is $%.2f.\n",price);
    printf("The temperature is %.1f°C\n", temperature);


    return 0;
}

/* %.1f --> mesela int a = 2.5 --> 2.50000  
            bu tarz gözükmesin diye yapıyoruz.
            bu yüzden 2.5 görünür.
            %.2f olsaydı 2.50 gözükürdü. */