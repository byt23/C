#include <stdio.h>
#include <math.h>

int main()
{
    float x = 3.14;

    // x = round(x); // yuvarlama
    // x = ceil(x); // tavan yuvarlaması 3.14 -> 4
    x = floor(x); // taban yuvarlaması 3.14 -> 3
    printf("%.2f",x);

    return 0;
}