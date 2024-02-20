#include<stdio.h>

int main (){
    float a, c;
    printf ("enter the value of 'a' which is the fahrenheit temperature :");
    scanf("%f",&a);
    printf ("the celsius tempereture of the fahrenheit :");
    c = ((a-32)*5)/9;
    printf ("%f" , c);
    return 0;
}
