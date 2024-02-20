#include<stdio.h>

int main (){
    float a,b;
    printf ("enter the value of 'a' which is the lenth of a cylinder :");
    scanf("%f",&a);
    printf ("enter the value of 'b' which is the height of a cylinder :");
    scanf("%f",&b);
    printf ("the area of the cylinder is :");
    printf ("%f\n" , 2*3.1426*(a/2)*(b+(a/2)));
    printf ("the volume of the cylinder is :");
    printf ("%f" , 3.1416*(a/2)*(a/2)*b);
    return 0;
}

