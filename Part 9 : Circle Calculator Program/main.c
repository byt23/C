#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // değişken değil, sait oldu artık

    printf("Enter the radius : ");
    scanf("%lf", &radius);

    area = PI * pow(radius,2);
    surfaceArea = 4 * PI * pow(radius,2);
    volume = (4.0/3.0) * PI * pow(radius,2);

    printf("Area: %.2lf cm²\n", area);
    printf("Surface Area: %.2lf cm²\n", surfaceArea);
    printf("Volume: %.2lf cm²\n", volume);

    return 0;
}