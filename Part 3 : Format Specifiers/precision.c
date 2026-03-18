#include <stdio.h>

int main() {

    float price1 = 15.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f\n",price1);
    printf("%.2f\n",price2);
    printf("%.2f\n",price3);


    printf("%+7.2f\n",price1);
    printf("%+7.2f\n",price2);
    printf("%+7.2f\n",price3);

    return 0;
}