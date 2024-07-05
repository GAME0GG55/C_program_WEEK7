#include<stdio.h>
void mian()
{
    int choice;
    float tedius, circum, area
    printf("1 Cricumfarence of the circle\n");
    printf("2 Cricumfarence of the circle\n");
    printf("Enter your choic 1 or 2 :");
    scanf("%d", &choice);
    printf("Enter redius fo the circle");
    scanf("%f", &radius);
    if (choice == 1){
        ctrcum = 2 * 3.1 * radius; //2*pi*r: เส้นรอบวง
        printf("Circumference of the circle = %.2f\n", circum)
    }
    else{
        area = 3.14*radius * radius;
    printf("Area of the circle = %.2f\n", area);
    }
}